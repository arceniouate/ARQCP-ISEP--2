    # A Makefile with variables and suffix rules
# variaveis
INCLUDES =ex17.h 
SOURCES = main.c ex17.c   print.c 
OBJFILES = main.o ex17.o  
EXEC = ex17

# Suffix rules
.SUFFIXES : .c .o

# How to build an object .o from a code file .c ; $< -- file name
.c.o: 
	gcc -Wall -g -c $<
	
${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}
run: ${EXEC} 
	 	#valgrind ./${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
