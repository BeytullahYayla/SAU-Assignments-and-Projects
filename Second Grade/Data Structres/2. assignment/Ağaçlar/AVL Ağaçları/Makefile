all:compile bind execute
	

compile:
	g++ -c -I "./include" ./src/DogruKuyruk.cpp -o ./lib/DogruKuyruk.o
	g++ -c -I "./include" ./src/NodeAvl.cpp -o ./lib/NodeAvl.o
	g++ -c -I "./include" ./src/AvlTree.cpp -o ./lib/AvlTree.o
	g++ -c -I "./include" ./src/Node2.cpp -o ./lib/Node2.o
	g++ -c -I "./include" ./src/Main.cpp -o ./lib/Main.o
	
	

bind:
	g++  ./lib/DogruKuyruk.o ./lib/NodeAvl.o ./lib/AvlTree.o ./lib/Node2.o ./lib/Main.o  -o ./bin/program


execute: 
	./bin/program