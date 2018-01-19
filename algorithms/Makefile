CC = gcc
CFLAGS = -Wall -g
DEBUG_FLAGS = -pg --static -g3
EXE = primes 
SOURCE = primes.c

primes:
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) -o $(EXE) $(SOURCE)

clean:
	rm -rf primes gmon.out
