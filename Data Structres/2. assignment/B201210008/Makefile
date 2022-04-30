all:compile bind execute
	

compile:
	g++ -c -I "./include" ./src/DogruKuyruk.cpp -o ./lib/DogruKuyruk.o
	g++ -c -I "./include" ./src/NodeAvl.cpp -o ./lib/NodeAvl.o
	g++ -c -I "./include" ./src/AvlTree.cpp -o ./lib/AvlTree.o
	g++ -c -I "./include" ./src/Point.cpp -o ./lib/Point.o
	g++ -c -I "./include" ./src/Main.cpp -o ./lib/Main.o
	g++ -c -I "./include" ./src/NodeDogruKuyruk.cpp -o ./lib/NodeDogruKuyruk.o
	
	

bind:
	g++  ./lib/DogruKuyruk.o ./lib/NodeDogruKuyruk.o ./lib/NodeAvl.o ./lib/Point.o ./lib/AvlTree.o ./lib/Main.o  -o ./bin/program


execute: 
	./bin/program