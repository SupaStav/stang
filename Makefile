build: check.o stang.o debug.o run.o
	g++ -o main check.o stang.o debug.o run.o
	rm *.o

check.o: check/check.cpp
	g++ -c check/check.cpp

stang.o: stang.cpp stang.h
	g++ -c stang.cpp

debug.o: debug/debug.cpp
	g++ -c debug/debug.cpp

run.o: run/run.cpp
	g++ -c run/run.cpp