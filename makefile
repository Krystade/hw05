  
CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = hw05.o

all: hw05

hw05: hw05.cpp hw05.h
	$(CC) $(FLAGS) hw05.cpp -o hw05

clean:
	rm *.o hw05 hw05.tar

tar:
	tar cf hw05.tar hw05.scr makefile hw05.cpp hw05.h
