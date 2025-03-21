CC := /usr/bin/gcc

all: clean | pr3-1 pr3-2 pr3-3 pr3-4

pr3-1:
	$(CC) -o pr3-1 src/pr3-1.c
pr3-2:
	$(CC) -o pr3-2 src/pr3-2.c
pr3-3:
	$(CC) -o pr3-3 src/pr3-3.c
pr3-4:
	$(CC) -o pr3-4 src/pr3-4.c -lm

clean:
	rm -rf pr3-*
