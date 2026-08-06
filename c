CC = gcc
CFLAGS = -Wall -g

prog2: prog2.c
	$(CC) $(CFLAGS) -o prog2 prog2.c

run: prog2
	./prog2

clean:
	rm -f prog2

