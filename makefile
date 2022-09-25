all:
	gcc -c main.c
	gcc -o main main.o
	./main
clean:
	rm -rf *.o main
