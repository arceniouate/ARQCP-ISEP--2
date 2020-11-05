  # A Makefile with variables and suffix rules
# variaveis
INCLUDES =ex14.h 
SOURCES = main.c ex14.c   
OBJFILES = main.o ex14.o  
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
	 #	valgrind ./${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
