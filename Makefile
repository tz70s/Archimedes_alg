V1 = ./v1/*.c
V2 = ./v2/*.c
V3 = ./v3/*.c
V4 = ./v4/*.c

CC = gcc
CFLAGS = -g -Wall -O0

main:v1.o v2.o v3.o v4.o
	$(CC) $(CFLAGS) -o main main.c $^
v1.o:${V1}
	$(CC) $(CFLAGS) $^ -c
v2.o:${V2}
	$(CC) $(CFLAGS) $^ -c
v3.o:${V3}
	$(CC) $(CFLAGS) $^ -c
v4.o:${V4}
	$(CC) $(CFLAGS) $^ -c
clean:
	rm -rf main *.o
