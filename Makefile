build: check.o stang.o debug.o run.o parse.o
	g++ -o main check.o stang.o debug.o run.o parse.o utility.o

parsevar.o: parse/variable/parsevar.h parse/variable/parsevar.cpp
	g++ -c parse/variable/parsevar.cpp -o parse.o

check.o: check/check.cpp
	g++ -c check/check.cpp

stang.o: stang.cpp stang.h
	g++ -c stang.cpp

debug.o: debug/debug.cpp
	g++ -c debug/debug.cpp

run.o: run/run.cpp
	g++ -c run/run.cpp

utility.o: utility/strutil/strutil.h utility/strutil/strutil.cpp
	g++ -c utility/strutil/strutil.cpp -o utility.o