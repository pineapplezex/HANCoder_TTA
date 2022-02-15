GT_Sync

Two boards program. One of the boards takes the role of transmitter (Master) while the other takes the role of receiver (Slave).
There is one unique message being transmitted periodically every ten seconds (idle time), the Master's local time. The Slave's
local time is updated with the Master's every time the message is received to generate the Global Time (GT).

Achievements
 1. Global Time synchronization between two boards.
 2. Dynamic boot-up (Same program for all the boards and the one activated first becomes the Master).
 3. Generic functions developed: delay(), 32uint_to_8uint(), 8uint_to_32uint(), FuntionCall_with_condition().

Bugs
 1. Free board adopts Slave role even without Local Ticks activated.
 2. CAN transmitter does not activate under request (after first activation does not stop transmitting).

To do
 1. Static boot-up (either with CAN_ID or hardware pins).
 2. Take program calculations out from FunctionCall subsystems.
 3. Increase number of nodes synchronized in the system.
 4. Develop democracy policy among Slaves to kick out Master and reassign roles in case of failure.
