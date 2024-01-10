CC = g++

all: collatz

collatz: collatz.cpp
	$(CC) -o bin/collatz collatz.cpp

clean:
	rm -f bin/collatz