# A Makefile with variables and suffix rules

# variables
INCLUDES =
SOURCES = main.c
OBJFILES = main.o
EXEC = ex01

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
