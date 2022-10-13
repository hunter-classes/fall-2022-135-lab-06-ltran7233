main: main.o caesar.o
	g++ -o main main.o caesar.o

tests: tests.o caesar.o
	g++ -o tests tests.o caesar.o
	
test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

main.o: main.cpp caesar.h
	g++ -c main.cpp

tests.o: tests.cpp doctest.h caesar.h
	g++ -c tests.cpp

test-ascii.o: test-ascii.cpp
	g++ -c test-ascii.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

clean:
	rm -f main.o tests.o test-ascii.o
