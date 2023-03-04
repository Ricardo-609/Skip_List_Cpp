CC=g++
CXXFLAGS=-std=c++0x
CFLAGS=-I

skiplist:main.o
	$(CC) -o ./main main.o --std=c++11 -pthread
	rm -f ./*.o

test:test.o
	$(CC) -o ./test test.cc --std=c++11 -pthread 

clean:
	rm -f ./*.o ./dumpfile 