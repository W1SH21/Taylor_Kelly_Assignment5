compile: main.o Sorting.o
	g++ -Wall -pedantic-errors -o main main.o Sorting.o

main.o: main.cpp Sorting.h
	g++ -Wall -pedantic-errors -c -g main.cpp

Sorting.o: Sorting.cpp Sorting.h
	g++ -Wall -pedantic-errors -c -g Sorting.cpp

clean:
	rm -f main
	rm -f *.o
