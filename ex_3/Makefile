CC=gcc
CFLAGS=-g -Wall
TARGET=ex3
RM=rm -f

DB=gdb
DFLAGS=--batch --ex r --ex bt --ex g --args

all : $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) $^ -o $@
	
debug : 
	$(CC) $(CFLAGS) $(TARGET).c -o $(TARGET)
	$(DB) $(DFLAGS) $(TARGET)

clean :
	$(RM) $(TARGET)

