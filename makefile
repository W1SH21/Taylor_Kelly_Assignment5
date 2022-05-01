compile: main.o Sorting.o selectSize.o
	g++ -Wall -pedantic-errors -o main main.o Sorting.o
	g++ -Wall -pedantic-errors -o selectSize selectSize.o Sorting.o

main.o: main.cpp Sorting.h
	g++ -Wall -pedantic-errors -c -g main.cpp

selectSize.o: selectSize.cpp Sorting.h
	g++ -Wall -pedantic-errors -c -g selectSize.cpp

Sorting.o: Sorting.cpp Sorting.h
	g++ -Wall -pedantic-errors -c -g Sorting.cpp

clean:
	rm -f main
	rm -f *.o
