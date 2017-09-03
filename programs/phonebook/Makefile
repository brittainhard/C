CFLAGS = -Wall -g
EXE = a.out
SOURCE = phonebook.c
CC = gcc
DEPS = ../garbage/garbage.o

all: clean phonebook

phonebook: $(DEPS)
	$(CC) $(CFLAGS) $(SOURCE) -o $(EXE) $(DEPS)

clean:
	rm -rf a.out *.o

