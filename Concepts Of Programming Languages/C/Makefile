all:compile bind execute
	

compile:
	gcc -w -c -I "./include" ./src/Test.c -o ./lib/Test.o
	gcc -w -c -I "./include" ./src/Dosya.c -o ./lib/Dosya.o
	gcc -c -I "./include" ./src/Kisi.c -o ./lib/Kisi.o
	gcc -c -I "./include" ./src/Oyun.c -o ./lib/Oyun.o

bind:
	gcc ./lib/Test.o ./lib/Dosya.o ./lib/Kisi.o ./lib/Oyun.o  -o ./bin/program


execute: 
	./bin/program