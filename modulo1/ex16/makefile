CC=gcc
CFLAGS=-I.
DEPS = ex16.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ex16: ex16.o main.o 
	$(CC) -o ex16 main.o ex16.o 