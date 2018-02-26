CC=gcc
CFLAGS=-g -Wall

RM=rm -f

DB=gdb
DFLAGS=--batch --ex r --ex bt --ex q --args

CTAR=$(wildcard ex*.c)
TARGET=$(basename $(CTAR))

all : $(TARGET)

debug : $(TARGET)
	$(DB) $(DFLAGS) $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) $< -o $@

clean :
	$(RM) $(TARGET)
	@ echo $(TARGET) Succesfully Cleaned !
	


