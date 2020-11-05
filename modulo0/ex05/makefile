# A Makefile with variables and suffix rules
# variaveis
INCLUDES =string_to_int.h 
SOURCES =string_to_int.c  main.c 
OBJFILES = string_to_int.c main.o  
EXEC = prog

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
