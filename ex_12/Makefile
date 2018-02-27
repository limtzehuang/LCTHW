CC = gcc
CFLAGS = -g -Wall

DB = gdb
DFLAGS = --batch --ex r --ex bt --ex q --args

CTAR = $(wildcard *.c)
TARGET = $(basename $(CTAR))

RM = rm -f


all : $(TARGET)

debug : $(TARGET)
	$(DB) $(DFLAGS) $<

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) $^ -o $@

clean :
	$(RM) $(TARGET)
