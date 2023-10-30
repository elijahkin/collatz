CC = g++

all: collatz

collatz: collatz.cpp
	$(CC) -o collatz collatz.cpp

clean:
	rm -f collatz