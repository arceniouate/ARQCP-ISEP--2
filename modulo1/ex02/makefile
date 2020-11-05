# A Makefile with variables and suffix rules

# variables
INCLUDES = copy_vec.h print_array.h
SOURCES = main.c copy_vec.c print_array.c
OBJFILES = main.o copy_vec.o print_array.o
EXEC = ex02

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
