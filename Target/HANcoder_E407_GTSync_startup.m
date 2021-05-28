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
frequency_IRQ = 100; % IRQ every 100 ticks of hardware clock -> local clock: 10 kHz
LED_ticks_toggle = 10000; % 10000 local ticks to toggle LED (toggles every 1 second with local tick ON)

% matrix scheduling constants
cycle_duration = 50000; % cycle duration in NTU
matrix_rows = 2;

TM0 = 0;
TM1 = 25000;
TM2 = 37500;

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
idle_time = hardware_granularity/frequency_IRQ * 10; 