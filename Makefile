OUTPUT = check.o stang.o

build: check.o stang.o
	g++ -o main check.o stang.o
	rm check.o stang.o

check.o: check/check.cpp
	g++ -c check/check.cpp

stang.o: stang.cpp stang.h
	g++ -c stang.cpp