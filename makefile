# Macros
CC = gcc
FLAGS = -Wall -g

all: main

clean:
	rm -f main *.o

main: main.o functions.o
	$(CC) $(FLAGS) main.o functions.o -o main

main.o: main.c functions.h
	$(CC) $(FLAGS) -c main.c

functions.o: functions.c functions.h
	$(CC) $(FLAGS) -c functions.c