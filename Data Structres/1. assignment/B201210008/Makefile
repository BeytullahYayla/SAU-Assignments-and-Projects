all:compile bind execute
	

compile:
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o
	g++ -c -I "./include" ./src/DoublyLinkedList.cpp -o ./lib/DoublyLinkedList.o
	g++ -c -I "./include" ./src/Main.cpp -o ./lib/Main.o

bind:
	g++ ./lib/Node.o ./lib/DoublyLinkedList.o ./lib/Main.o -o ./bin/program


execute: 
	./bin/program
