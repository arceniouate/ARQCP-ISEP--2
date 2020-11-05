    # A Makefile with variables and suffix rules
# variaveis
INCLUDES =sum_even.h 
SOURCES = main.c sum_even.c   
OBJFILES = main.o sum_even.o  
EXEC = ex03

# Suffix rules
.SUFFIXES : .c .o

# How to build an object .o from a code file .c ; $< -- file name
.c.o: 
	gcc -Wall -g -c $<
	
${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}
run: ${EXEC} 
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
