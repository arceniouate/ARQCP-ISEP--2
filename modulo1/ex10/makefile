# A Makefile with variables and suffix rules

# variables
INCLUDES = odd_sum.h print_array.h
SOURCES = main.c odd_sum.c print_array.c
OBJFILES = main.o odd_sum.o print_array.o
EXEC = ex10

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
