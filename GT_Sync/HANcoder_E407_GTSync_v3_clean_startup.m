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

% Received message
Bus_Rx_msg(1) = Simulink.BusElement;
Bus_Rx_msg(1).Name = 'Local_Time';
Bus_Rx_msg(1).DataType = 'uint32';
Bus_Rx_msg(2) = Simulink.BusElement;
Bus_Rx_msg(2).Name = 'Basic_Cycle';
Bus_Rx_msg(2).DataType = 'uint8';
received_message = Simulink.Bus;
received_message.Elements = Bus_Rx_msg;