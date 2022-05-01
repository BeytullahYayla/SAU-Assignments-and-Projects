all:compile bind execute
	

compile:
	gcc -c -I "./include" ./src/Test.c -o ./lib/Test.o
	gcc -c -I "./include" ./src/Dosya.c -o ./lib/Dosya.o
	gcc -c -I "./include" ./src/Kisi.c -o ./lib/Kisi.o

bind:
	gcc ./lib/Test.o ./lib/Dosya.o ./lib/Kisi.o  -o ./bin/program


execute: 
	./bin/program