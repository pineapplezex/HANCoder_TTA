2xCAN -----------------------------------
Two CAN channels communication between two boards.

The program just presents a basic layout to test the double channel communication.
One of the boards (Board_ID = 1) is the sender. Every time the WKUP button is
pressed a new message is sent through both channels. The message is a number which
increases with every new message. The other board (Board_ID = 2) is the receiver.
It just waits for messages to arrive. There is only one kind of message being 
transmitted through the channel so no RX_ID management is required.

In HANTune it is possible to see how the message sent increases with every new
message, and the receiver receives the same message over the two CAN channels. If
one of the CAN communicaton channel cables is removed, that CAN channel stops
working, while the other still keeps operations. When the cable is connected again
both resume operations normally.
