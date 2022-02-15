% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below

%% Measurements
MEX_Flag = 0; % Measure Execution Time for comp task [A2 init, A3 end]
Toggle_Flag = 1; % Change digital output to see task activation [A0]

%% Constants
hardware_granularity = 1000000; % 1 MHz (1 tick/microsecond) <not operational - its selected in HANCoder>
frequency_IRQ = 100; % IRQ every 100 ticks of hardware clock -> local clock: 10 kHz
LED_ticks_toggle = 10000; % 10000 local ticks to toggle LED (toggles every 1 second with local tick ON)

% Roles
Free_Role = 0;
Master_Role = 1;
Slave_Role = 2;

% COMunication Model
COMM_Period = 25;
COMM_Phase1  = floor(COMM_Period/5);
COMM_Phase2  = floor(4*COMM_Period/5);

% Basic Cycle: Time Master Election
DEBUG_wait = 20000;
basic_cycle_start = 5;
COMM_duration = COMM_Period;
COMP_duration = 5;
% Sync message
TM_COMM_Sync    = basic_cycle_start;                % COMM Sync
TM_Check_Sync   = TM_COMM_Sync   + COMM_duration;	% COMP LocalTime update 
TM_Update_LT    = TM_Check_Sync  + COMP_duration;   % COMP Check Message
TM_Vote_Dec     = TM_Update_LT   + COMP_duration;	% COMP Generate vote
% Vote 1
TM_COMM_Vote1   = TM_Vote_Dec    + COMP_duration;   % COMM Vote 1
TM_Check_Vote1  = TM_COMM_Vote1  + COMM_duration;	% COMP Check Message
TM_Count_Vote1  = TM_Check_Vote1 + COMP_duration;	% COMP Count vote
% Vote 2
TM_COMM_Vote2   = TM_Count_Vote1 + COMP_duration;   % COMM Vote 2
TM_Check_Vote2  = TM_COMM_Vote2  + COMM_duration;	% COMP Check Message
TM_Count_Vote2  = TM_Check_Vote2 + COMP_duration;	% COMP Count vote
% Vote 3
TM_COMM_Vote3   = TM_Count_Vote2 + COMP_duration;   % COMM Vote 3
TM_Check_Vote3  = TM_COMM_Vote3  + COMM_duration;	% COMP Check Message
TM_Count_Vote3  = TM_Check_Vote3 + COMP_duration;	% COMP Count vote
% Postelection
TM_Check_TOuts  = TM_Count_Vote3 + COMP_duration;	% COMP Timeouts check
TM_New_Master   = TM_Check_TOuts + COMP_duration;	% COMP MasterID Decision
TM_Reset_Var    = TM_New_Master  + COMP_duration;	% COMP Reset Variables
TM_Reset_Board  = TM_Reset_Var   + COMP_duration;	% COMP Reset Board

% matrix scheduling constants
basic_cycle_duration = TM_Reset_Board + COMP_duration; % cycle duration in NTU
matrix_rows = 2;

% message constants
Sync_ID = 1;
Vote1_ID = 12;
Vote2_ID = 22;
Vote3_ID = 32;


comm_delay_measured1 = 0.0003; % [0.3 ms]
comm_delay_measured2 = 0.0008; % [0.8 ms]
comm_delay_estimation1 = ...
    round(comm_delay_measured*hardware_granularity/frequency_IRQ); % [0.3 ms] in ticks 
comm_delay_estimation2 = ...
    round(comm_delay_measured*hardware_granularity/frequency_IRQ); % [0.8 ms] in ticks 
time_difference_threshold = 500; % 500 ticks [50 ms]
wrap_up_threshold = basic_cycle_duration - time_difference_threshold*10;

% Initialization
idle_time_init = basic_cycle_duration*matrix_rows;

%% Signals
% Defining signals for viewing in HANtune
LedValue = Simulink.Signal; % Define as signal
LedValue.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

% Defining System Information Signals
SI_FreeStack = Simulink.Signal;
SI_FreeStack.StorageClass = 'ExportedGlobal';
SI_CPUload = Simulink.Signal;
SI_CPUload.StorageClass = 'ExportedGlobal';
SI_FreeHeap = Simulink.Signal;
SI_FreeHeap.StorageClass = 'ExportedGlobal';

%% Parameters
% Defining a parameter for editing in HANtune
HANtuneOverride = Simulink.Parameter; % Define as parameter
HANtuneOverride.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
HANtuneOverride.Value = 0; % Initial value is set to zero, no override

% idle time in local ticks (10000 ticks -> 1 second) <10 seconds>
idle_time = Simulink.Parameter; % Define as parameter
idle_time.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
idle_time = hardware_granularity/(frequency_IRQ+1) * 5; 

bussignal(1) = Simulink.BusElement;
bussignal(1).Name = 'First_Board';
bussignal(2) = Simulink.BusElement;
bussignal(2).Name = 'Second_Board';
bussignal(3) = Simulink.BusElement;
bussignal(3).Name = 'Third_Board';
vote_array = Simulink.Bus;
vote_array.Elements = bussignal;

% Received local time in votes
Bus_Rx_VoteLT(1) = Simulink.BusElement;
Bus_Rx_VoteLT(1).Name = 'Local_Time_Master';
Bus_Rx_VoteLT(1).DataType = 'uint16';
Bus_Rx_VoteLT(2) = Simulink.BusElement;
Bus_Rx_VoteLT(2).Name = 'Local_Time_Board_1';
Bus_Rx_VoteLT(2).DataType = 'uint16';
Bus_Rx_VoteLT(3) = Simulink.BusElement;
Bus_Rx_VoteLT(3).Name = 'Local_Time_Board_2';
Bus_Rx_VoteLT(3).DataType = 'uint16';
Bus_Rx_VoteLT(4) = Simulink.BusElement;
Bus_Rx_VoteLT(4).Name = 'Local_Time_Board_3';
Bus_Rx_VoteLT(4).DataType = 'uint16';
received_vote_local_time = Simulink.Bus;
received_vote_local_time.Elements = Bus_Rx_VoteLT;

% Message buffer
Msg_Buffer(1) = Simulink.BusElement;
Msg_Buffer(1).Name = 'Buffer_1';
Msg_Buffer(1).DataType = 'uint8';
Msg_Buffer(2) = Simulink.BusElement;
Msg_Buffer(2).Name = 'Buffer_2';
Msg_Buffer(2).DataType = 'uint8';
Msg_Buffer(3) = Simulink.BusElement;
Msg_Buffer(3).Name = 'Buffer_3';
Msg_Buffer(3).DataType = 'uint8';
Msg_Buffer(4) = Simulink.BusElement;
Msg_Buffer(4).Name = 'Buffer_4';
Msg_Buffer(4).DataType = 'uint8';
Msg_Buffer(5) = Simulink.BusElement;
Msg_Buffer(5).Name = 'Buffer_5';
Msg_Buffer(5).DataType = 'uint8';
Msg_Buffer(6) = Simulink.BusElement;
Msg_Buffer(6).Name = 'Buffer_6';
Msg_Buffer(6).DataType = 'uint8';
Msg_Buffer(7) = Simulink.BusElement;
Msg_Buffer(7).Name = 'Buffer_7';
Msg_Buffer(7).DataType = 'uint8';
Msg_Buffer(8) = Simulink.BusElement;
Msg_Buffer(8).Name = 'Buffer_8';
Msg_Buffer(8).DataType = 'uint8';
msg_buffer_type = Simulink.Bus;
msg_buffer_type.Elements = Msg_Buffer;


% Demuxed message buffer
Demux_Msg_Buffer(1) = Simulink.BusElement;
Demux_Msg_Buffer(1).Name = 'Msg_Header';
Demux_Msg_Buffer(1).DataType = 'uint8';
Demux_Msg_Buffer(2) = Simulink.BusElement;
Demux_Msg_Buffer(2).Name = 'Local_Time';
Demux_Msg_Buffer(2).DataType = 'uint16';
Demux_Msg_Buffer(3) = Simulink.BusElement;
Demux_Msg_Buffer(3).Name = 'Basic_Cycle';
Demux_Msg_Buffer(3).DataType = 'uint8';
demux_msg_buffer_type = Simulink.Bus;
demux_msg_buffer_type .Elements = Demux_Msg_Buffer;