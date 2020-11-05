# A Makefile with variables and suffix rules

# variables
INCLUDES = integer_part.h fractional_part.h
SOURCES = main.c integer_part.c fractional_part.c
OBJFILES = main.o integer_part.o fractional_part.o
EXEC = ex08

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
