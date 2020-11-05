# A Makefile with variables and suffix rules

# variables
INCLUDES = count.h
SOURCES = main.c count.c
OBJFILES = main.o count.o
EXEC = ex04

# Suffix rules
.SUFFIXES : .c .o

# How to build an object .o from a code file .c ; $< -- file name
.c.o:
	gcc -Wall -g -c $<$

{EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	valgrind ./${EXEC}

debug: ${EXEC}
	ddd ./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
