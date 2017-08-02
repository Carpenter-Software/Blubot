# Makefile: Blubot
#
# (1) Change Terminal to Working Directory
# (2) Make clean
# (3) Make
# (4) ./Blubot
#
#
# rev: 20170801

all: Blubot

# Local Libraries
LIBA = libbcm2835.a 
LIBH = bcm2835.h

# Compiler
CC = gcc

# Options for development
CFLAGS = -g -Wall -std=c99
# CFLAGS = -O -Wall -std=c99

# Place object files here
Blubot: main.o
	$(CC) -o Blubot main.o $(LIBA)

# Place a new line for each header and source code
main.o: $(LIBH) main.h main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o Blubot

