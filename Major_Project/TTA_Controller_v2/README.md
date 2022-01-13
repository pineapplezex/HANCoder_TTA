Improved version of the TTA_Controller software (13th January 2022).

(1) Input-Vehicle response is far more stable, and speed ranges [-10, 10] m/s as the specification proposed.

(2) There are still missing messages, but the miss rates at the controller boards are very low.
There were some software errors helping the misses to happen. There are still an important amount of misses
happening between the controller and the input generator and vehicle emulator. The desync measured is
Controller Boards ensemble precision: avg: 2, max: 20, min: -17 in ticks. 2 ticks is the expected ensemble precision, as this is the COMM delay jitter.
Other boards ensemble precision: avg: 17, max: 30, min: -15 in ticks. There seems to be something provoking the desincronization to happen inside the code.
When looking at messages missed, in fifteen minutes we observed a maximum of 2 messages missed between the controlled boards, but from 67 to 194 messages missed
between the controller boards and the other two boards. Further inspection is required.
