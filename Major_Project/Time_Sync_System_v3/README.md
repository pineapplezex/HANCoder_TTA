Clean version of the Time_Sync final software. Three STM32-E407 boards are synchronized using a master-slave policy with role change via a poll.
These are the main properties:

(1) Granularity is set at 0.1 ms via hardware clock interrupts. This can be changed in the Simulink file.

(2) Basic cycle is configurable at the Matlab \_startup file. At the moment, two basic cycles shape the whole matrix cycle.
    The first basic cycle has the synchronization schedule. The second basic cycle is empty, as a template to build your own functionality.

(3) The communication is performed with two CAN channels. During a communication task, the first CAN channel sends a message every COMM_Phase1
    (configurable) ticks after the task starts and the second CAN channel sends the same message COM_Pase2 (configurable) ticks after the task
    starts. Sending two messages at the same time is currently not supported. A maximum of 7 messages sent per channel per task are supported.

(4) When Local Time is synchronized at the Slave end, if the desync is negative (Local Time shall be reduced) the previous already executed tasks
    are not executed again, and if the desync is positive (Local Time shall be increased) the ticks are incremented in small steps, so no tasks
    are skipped.
    
(5) COMM tasks and next COMM_check computational tasks are made generic, so just copy/paste is required to add new communication functionality.

Measurements:

(1) COMM delay: 0.3 ms CAN1 and 0.75 ms CAN2 with 1000 kbits/s baudrate

(2) COMP time: ~0.032 ms

(3) Precision: +/-1 tick desynchronization with 20 ms sync frequency

Problems:

(1) Some messages are randomly lost. Sometimes a board sends a message that is not received by any of the other two, nor the one from CAN1 or the
    one from CAN2. When just one of the two is lost, at least the other is received and no error is raised. The rate of failure seems to depend on
    the communication period, the longest the period the lower the chance of missing a message. Sending multiple messages during the same task reduces
    the miss rate, but does not solve the problem.

Missing rate: (measurements over ~10 minutes)

(a) comm period = 2.0 ms, single message/channel, 30 misses/min.

(b) comm period = 2.0 ms, multiple messages/channel, 20 misses/min.

(c) comm period = 3.5 ms, multiple messages/channel, 1.3 misses/min.

(d) comm period = 4.0 ms, multiple messages/channel, 0 misses/min. No misses were observed in 15 minutes, but that does not mean it is impossible to miss a message.
