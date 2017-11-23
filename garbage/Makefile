CFLAGS = -Wall -g
EXE = a.out
SOURCE = test_garbage.c
CC = gcc
DEPS = garbage.o

all: clean test_garbage

test_garbage: $(DEPS)
	$(CC) $(CFLAGS) $(SOURCE) -o $(EXE) $(DEPS)

clean:
	rm -rf a.out *.o

