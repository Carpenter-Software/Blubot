# Blubot
Robotic software development
### Motor Drive Interface
#### MD I2C Interface between BCM2835 and MD25

**Sources: MD Interface Development**

- Linux Operating System: Raspbian 
[Raspberry Pi Raspbian OS](https://www.raspberrypi.org/downloads/)

- Single Board Computer - System on Chip: Broadcom BCM2835 technology proprietary to the Raspberry Pi Foundation. Raspberry Pi 3 and Raspberry Zero. 
[Raspberry Pi](https://www.raspberrypi.org)

- RD02 - 12v robot drive: MD25 - EMG30 by Robot Electronics 
[Robot Electronics](http://www.robot-electronics.co.uk)

- C library for Broadcom BCM 2835 as used in Raspberry Pi
[C library BCM2835](http://www.airspayce.com/mikem/bcm2835/)

- GCC, the GNU Compiler Collection
[GCC](https://gcc.gnu.org)

- GNU Make
[Make](https://www.gnu.org/software/make/)

- I2C Interface
[Wiki](https://en.wikipedia.org/wiki/I²C)

**Problem:**

- Personally I'm not a linux guru and I'm not so familiar with linux deamons but did get a task up and running automatically with the Raspberry Zero. The task was a simple code, a `Hello World` in that the code used a GPIO pin to blink an LED. When the RPI Zero booted, the software started automatically via `/etc/rc.local` Any help from the linux world will be most appreciative.

- The goal of this project is to interface the I2C protocol between the MD25 and BCM2835 Library.


**Development Update:**

- 20170804: BlinkTest
- 20170801: Experimental Stage
- 20170801: Start date
