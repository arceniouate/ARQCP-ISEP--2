    # A Makefile with variables and suffix rules
# variaveis
INCLUDES =palindrome.h 
SOURCES = main.c palindrome.c   
OBJFILES = main.o palindrome.o  
EXEC = ex11

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
