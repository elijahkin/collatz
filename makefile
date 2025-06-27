CC = clang++
CFLAGS = -std=c++23 -O2

all: collatz

collatz: src/collatz.cpp
	$(CC) $(CFLAGS) -o bin/collatz src/collatz.cpp

clean:
	rm -f bin/*
