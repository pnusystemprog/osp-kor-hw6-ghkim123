CC = gcc
CFLAGS = -W -Wall
TARGET = phoneBookMain
OBJECTS = register.o print.o search.o delete.o phoneBookMain.o
all : $(TARGET)
%.o : %.c
	$(CC) -c $(CFLAGS) $<
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean :
	rm $(OBJECTS) $(TARGET)
