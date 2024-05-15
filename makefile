all: compile link

compile:
	g++ -Isrc/include -c personaggio.cpp
	g++ -Isrc/include -c casella.cpp
	g++ -Isrc/include -c equipaggiamento.cpp
	g++ -Isrc/include -c menu.cpp
	g++ -Isrc/include -IPersonaggi -ICaselle -IEquipaggiamento -c main.cpp
link: 
	g++ main.o personaggio.o menu.o -o main -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system