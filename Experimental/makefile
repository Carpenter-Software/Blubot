# Blubot Robotics
# Makefile

# Program Options 
PROGRAM = Blubot
VERSION = 20170804
C_FILES := $(wildcard *.c)
OBJS := $(patsubst %.c, %.o, $(C_FILES))
CC = gcc
CFLAGS = -g -Wall -pedantic -std=gnu11
LDFLAGS = -lbcm2835

# make program
all: $(PROGRAM)

$(PROGRAM): .depend $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(PROGRAM)

depend: .depend

.depend: cmd = gcc -MM -MF depend $(var); cat depend >> .depend;
.depend:
	@echo "Blubot ..."
	@$(foreach var, $(C_FILES), $(cmd))

-include .depend

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# make clean program
clean:
	@rm -f $(PROGRAM) *.o .depend depend
	
.PHONY: depend
