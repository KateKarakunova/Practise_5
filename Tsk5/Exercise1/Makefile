CC = gcc
CFLAGS = -Wall
TARGET = my_program

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

.PHONY: clean
clean:
	rm -f $(TARGET)
