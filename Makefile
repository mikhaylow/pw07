all:
	mkdir -p bin
	gcc -Wall src/pw07-1.c -o bin/pw07-1
	gcc -Wall src/pw07-2.c -o bin/pw07-2
	gcc -Wall src/pw07-3.c -o bin/pw07-3
	gcc -Wall src/pw07-4.c -o bin/pw07-4
# 	gcc -Wall src/pw06-5.c -o bin/pw06-5