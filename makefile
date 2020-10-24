all: 
	gcc -o test euler.c

euler.o: euler.c
	gcc -c euler.c

run:
	./test