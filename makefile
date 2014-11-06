all: game

game: main.o Item.o Inventory.o
	g++ main.o Item.o Inventory.o -o bin/game

main.o: main.cpp
	g++ -c main.cpp

Item.o: Item.cpp
	g++ -c Item.cpp

Inventory.o: Inventory.cpp
	g++ -c Inventory.cpp

clean:
	rm -rf *.o bin/game
