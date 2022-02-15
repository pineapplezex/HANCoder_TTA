% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below

%% Constants
hardware_granularity = 1000000; % 1 MHz (1 tick/microsecond) <not operational - its selected in HANCoder>
frequency_IRQ = 99; % IRQ every 100 ticks of hardware clock -> local clock: 10 kHz
LED_ticks_toggle = 10000; % 10000 local ticks to toggle LED (toggles every 1 second with local tick ON)

% Roles
Free_Role = 0;
Master_Role = 1;
Slave_Role = 2;

% matrix scheduling constants
basic_cycle_duration = 60000; % cycle duration in NTU
matrix_rows = 2;

TM0 = 100;
TM1 = 20000;
TM2 = 30000;
TM3 = 40000;
TM4 = 50000;

% message constants
Sync_ID = 1;
Vote1_ID = 12;
Vote2_ID = 22;
Vote3_ID = 32;


comm_delay_estimation = 3; % 3 ticks [0.3 ms]
time_difference_threshold = 500; % 500 ticks [50 ms]
wrap_up_threshold = basic_cycle_duration - time_difference_threshold*10;

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
Bus_Rx_VoteLT(1).DataType = 'uint32';
Bus_Rx_VoteLT(2) = Simulink.BusElement;
Bus_Rx_VoteLT(2).Name = 'Local_Time_Board_1';
Bus_Rx_VoteLT(2).DataType = 'uint32';
Bus_Rx_VoteLT(3) = Simulink.BusElement;
Bus_Rx_VoteLT(3).Name = 'Local_Time_Board_2';
Bus_Rx_VoteLT(3).DataType = 'uint32';
Bus_Rx_VoteLT(4) = Simulink.BusElement;
Bus_Rx_VoteLT(4).Name = 'Local_Time_Board_3';
Bus_Rx_VoteLT(4).DataType = 'uint32';
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