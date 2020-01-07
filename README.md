# WatchDogTimer
A watchdog timer is a piece of hardware that can be used to automatically detect software anomalies and reset the processor if any occur.
Suppose that the loop must execute at least once every five milliseconds. (Say the motor must be fed new control parameters at least that often.) If the watchdog timer's counter is initialized to a value that corresponds to five milliseconds of elapsed time, say 10,000, and the software has no bugs, the watchdog timer will never expire; the software will always restart the counter before it reaches zero.
Here, a sample code for WatchDogTimer Implementation in LPC2148 ,based on ARM,(Proteus & Keil v6.0 Simulation), where we use PLL (Phase Locked Loop) to synchronize timing of system.
