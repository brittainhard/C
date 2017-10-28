CC = gcc
EXE = a.out
CFLAGS = -Wall -g
DEPS = ../garbage/garbage.o
HEADERS = apue.h

program: $(DEPS) $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(EXE) $(DEPS)

clean:
	rm -rf a.out *.o *.dSYM
