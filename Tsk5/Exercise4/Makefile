CC = gcc
CFLAGS = -Wall -Werror
SRC = main.c
EXECUTABLE = Exercise4

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXECUTABLE)
