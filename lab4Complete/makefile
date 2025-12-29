# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
#THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
#THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
#INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
#TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -std=c99 -pedantic -g

# Source files
SRCS = lab4main.c calcFinalGrades.c getCumulative.c insert.c option10.c option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c printHeader.c printStudent.c calcCurrentGrade.c get_NodeforID.c readFile.c freeList.c

# Executable
EXEC = lab4

# Default target
all: build run

build:
	$(CC) $(CFLAGS) -o $(EXEC) $(SRCS)

run: lab4
	./$(EXEC)

# Clean compiled files
clean:
	rm -f $(EXEC) 
