all: factorial.o hello.o main.o
	gcc -o fact  factorial.o hello.o main.o
%.o: %.c functions.h
	gcc -c $<
