// Blubot Robotics
// Project: Experimantal
// File: header
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

#ifndef _BLUBOT_H_
#define _BLUBOT_H_
// ===================================
// SYSTEM and Libraries INCLUDES HERE
// bcm 28325 GPIO interface 
#include <bcm2835.h>
// placed within same directory as code
// #include "bcm2835.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// #include <math.h> 
// #include <string.h> 
// #include <time.h> 
// #include <signal.h 
// #include <stddef.h> 
//
// ===================================
// DEFINES HERE
#define _DEBUG_ 0
// ===================================
// DEFINES HESE
// BCM2835 
// Blinks a RPI B+ GPIO J8 Pin 11 
// ( which is GPIO Pin 17)
#define LED_1 RPI_BPLUS_GPIO_J8_11
// ( which is GPIO Pin 19)
#define LED_2 RPI_BPLUS_GPIO_J8_35
// ===================================
// PROROTYPE FUNCTIONS HERE
void errPrgm(int e);
// ===================================
// GLOBAL VARIBALS HERE
int _xvl;
int _pid;

#endif
