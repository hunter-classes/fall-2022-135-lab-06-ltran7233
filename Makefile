main: main.o 
	g++ -o main main.o 

tests: tests.o 
	g++ -o tests tests.o 
	
test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

main.o: main.cpp
	g++ -c main.cpp

tests.o: tests.cpp doctest.h
	g++ -c tests.cpp

test-ascii.o: test-ascii.cpp
	g++ -c test-ascii.cpp


clean:
	rm -f main.o tests.o
