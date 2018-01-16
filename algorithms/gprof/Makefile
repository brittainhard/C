CC = gcc
CFLAGS = -Wall -g
DEBUG_FLAGS = -pg --static -g3

test_gprof:
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) -o test_gprof test_gprof.c

clean:
	rm -rf test_gprof gmon.out
