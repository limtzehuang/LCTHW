CC=gcc
CFLAGS=-g -Wall
RM=rm -f
DB=gdb
DFLAGS=--batch --ex r --ex bt --ex q --args

CTAR=$(wildcard ex*.c)
TARGET=$(basename $(CTAR))

all : $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) $< -o $@
	
debug : 
	$(CC) $(CFLAGS) $(TARGET).c -o $(TARGET).o
	$(DB) $(DFLAGS) $(TARGET)

clean :
	$(RM) $(TARGET)
	@ echo $(TARGET) Cleaned Succesfully
	


