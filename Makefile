turing: main.o tape.o
	$(CC) -o turing main.o tape.o -Wall -pedantic

tape: tape.h
	$(CC) tape.c -Wall -pedantic
