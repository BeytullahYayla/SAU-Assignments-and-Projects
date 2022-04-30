all:compile bind execute
	

compile:
	gcc -c -I "./include" ./src/Test.c -o ./lib/Test.o

bind:
	gcc ./lib/Test.o -o ./bin/program


execute: 
	./bin/program