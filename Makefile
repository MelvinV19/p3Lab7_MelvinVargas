mu: Racional.o main.o
	g++ Racional.o main.o -o mu -lncurses

Racional.o: Racional.h Racional.cpp
	g++ -c Racional.cpp

main.o: Racional.h main.cpp
	g++ -c main.cpp
