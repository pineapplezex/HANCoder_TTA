First working version of the whole five boards ensemble TTA Controller project.
Three boards are acting as the controller, using the Time Sync System software. 
One board acts as Input Generator, getting the speed and steering signals from
HANTune. The last board acts as Vehicle Emulator, receiving torque values from 
the controller and giving sensor values for the wheel displacement back to the
controller. The controller is based upon the Two-Axle vehicle controller built
in Matlab by Sanket Dutta. Even though it has steering calculations it has only
been verified in straight line forward and backward speed.

Message missing rates are increased with respect to Time_Sync_System_v3. The
controller response is fairly stable though. However, the speed values are
limited to -4 to 4 m/s range.
