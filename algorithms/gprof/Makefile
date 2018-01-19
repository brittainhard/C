CC = gcc
CFLAGS = -Wall -g
DEBUG_FLAGS = -pg --static -g3

primes:
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) -o primes primes.c

primes_faster:
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) -o primes_faster primes_faster.c

clean:
	rm -rf primes primes_faster gmon.out
