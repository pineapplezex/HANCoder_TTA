Unclean version of the Time_Sync final software. Three STM32-E407 boards are synchronized using a master-slave
policy with role change via a poll. These are the main properties:

(1) Granularity is set at 0.1 ms via hardware clock interrupts. This can be changed in the Simulink file.

(2) Basic cycle is 150 ms long, with communication tasks with 2 ms period and computational tasks with 0.5 ms
    period.  
    
(3) Two basic cycles shape the whole matrix cycle. The first basic cycle has the synchronization schedule. The
    second basic cycle is empty, as a template to build your own functionality.
    
(4) The communication is performed with two CAN channels. During a communication task, the first CAN channel
    sends the message 0.4 ms after the task starts and the second CAN channel sends the same message 0.4 ms
    before the task finishes.
    
(5) When Local Time is synchronized at the Slave end, if the desync is negative (Local Time shall be reduced)
    the previous already executed tasks are not executed again, and if the desync is positive (Local Time shall
    be increased) the ticks are incremented in small steps, so no tasks are skipped.
    
    
    
Measurements:

(1) COMM delay: 0.3 ms CAN1 and 0.75 ms CAN2 with 1000 kbits/s baudrate

(2) COMP time: ~0.032 ms

(3) Precision: +/-1 tick desynchronization with 20 ms sync frequency


Problems:

(1) Some messages are randomly lost. Sometimes a board sends a message that is not received by any of the other
    two, nor the one from CAN1 or the one from CAN2. When just one of the two is lost, at least the other is 
    received and no error is raised. The rate of failure seems to depend on the communication period, the
    longest the period the lower the chance of missing a message.
    
    Missing rate:
    
    (a) comm period = 2.0 ms, 1 every 1000 messages lost.
    
    (b) comm period = 2.5 ms, 1 every 10000 messages lost.
    
    (c) comm period = 3.0 ms, 1 every 50000 messages lost.
    
