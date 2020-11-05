# A Makefile with variables and suffix rules

# variables
INCLUDES = fill_array.h average.h
SOURCES = main.c fill_array.c average.c
OBJFILES = main.o fill_array.o average.o
EXEC = ex03

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
