# A Makefile with variables and suffix rules

# variables
INCLUDES = sort_without_reps.h print_array.h
SOURCES = main.c sort_without_reps.c print_array.c
OBJFILES = main.o sort_without_reps.o print_array.o
EXEC = ex09

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
