Local_Ticks
Single board program. Pressing the WakeUpButton the local ticks counter increases at 10 kHz (0.1 ms granularity).

Achievements:
 1. Hardware free running counter interrupts to generate the local time.
 2. Pause and resume of the local time pressing the WakeUpButton.
 3. Local time log using HANTune.
 4. Simulink loop keeps working regardless of the interrupts.

To do:
 1. Speed up program frequency to 100 kHz (0.01 ms granularity). Current version stops working when trying so.
