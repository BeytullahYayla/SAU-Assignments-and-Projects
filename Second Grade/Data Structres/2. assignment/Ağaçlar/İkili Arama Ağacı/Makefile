all:compile bind execute
	

compile:
	
	g++ -c -I "./include" ./src/Main.cpp -o ./lib/Main.o
	g++ -c -I "./include" ./src/BinarySearchTree.cpp -o ./lib/BinarySearchTree.o
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o

bind:
	g++ ./lib/BinarySearchTree.o ./lib/Node.o ./lib/Main.o -o ./bin/program


execute: 
	./bin/program