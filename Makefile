CC=gcc
SRC=src/
OUT=out/

all:
	$(CC) drill.c -o drill -g -Wall -Wextra
clean:
	rm -f drill