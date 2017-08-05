// Blubot Robotics
// Project: Experimantal
// File: main
// Purpose:
// Author: Jesse Carpenter
// Github: Carpenter-Software/Blubot
//
// Revision: 20170802
// 
//
// This file is part of Blubot Robotics.
//
// Blubot Project is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Blubot Project is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Blubot Project.  If not, see <http://www.gnu.org/licenses/>.
//
// FIXME HEADER INSTRUCTIONS 
// All header files go into Blubot.h
// so to emulate an arduino environment.
// Use only Blubot.h in each of your files.
// FIXME
// Place your global varibles in the hearder file.
// Initialize them in your code.

#include "Blubot.h"

// ==========================================
// ==========================================
void led()
{
	// Alternate LED_1 and LED_2 
	bcm2835_gpio_write(LED_1, HIGH);
	bcm2835_gpio_write(LED_2, LOW);
	bcm2835_delay(125);
	// Reverse LED_1 and LED_2
	bcm2835_gpio_write(LED_1, LOW);
	bcm2835_gpio_write(LED_2, HIGH);
	bcm2835_delay(125);
}
// ==========================================
// ==========================================
void setup()
{
	// Initiate BCM 2835
	if (!bcm2835_init())
	{
		errPrgm(1);
		return;
	}
	
	// LED_1 set to putput
	bcm2835_gpio_fsel(LED_1, BCM2835_GPIO_FSEL_OUTP);
	
	// LED_2 set to output
	bcm2835_gpio_fsel(LED_2, BCM2835_GPIO_FSEL_OUTP);
}
// ==========================================
// ==========================================
void loop()
{
	led();
}
// ==========================================
// ==========================================
int main(int argc, char *argv[])
{
	int once = 1;
	int _pid = (int) getpid();
	errPrgm(0);
	
	// TODO use switch statement
	if (once)
	{
		once = 0;
		// (1) Kill Process: kill <pid>
		// (2) killall Blubot
		// (3) Task Manager
		printf("process id  : %d\n", _pid);
		for(int i = 0; i < argc; i++)
		{
			printf("argv[%d]: %s\n", i, argv[i]);
		}
		// BUGFIX
		fflush(NULL);
	}
	
	// SETUP CALL
	setup();
	
	// LOOP CALL
	if (!_xvl)
	{
		do
		{	
			loop();
		} while(!_xvl); 
		bcm2835_close();
	}
	
	return _xvl;
}

void errPrgm(int e)
{
	_xvl = e;
}
