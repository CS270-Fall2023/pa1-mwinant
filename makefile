all: main

clean:
	rm -f main *.o

main: main.o functions.o
	gcc main.o functions.o -o main

main.o: main.c functions.h
	gcc -c main.c

functions.o: functions.c functions.h
	gcc -c functions.c