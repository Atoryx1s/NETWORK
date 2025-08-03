C = gcc
CFLAGS = -std=c11 -Werror -Wall
LDLIBS = -lm
OBJS = lin.o win.o main.o
OUTPUT = flag
all: $(OUTPUT)

flag: $(OBJS)
	$(CC) $(CFLAGS) -o flag $(OBJS) -lm

win.o: win.c win.h
	$(CC) $(CFLAGS) -c win.c -o win.o

lin.o: lin.c lin.h
	$(CC) $(CFLAGS) -c lin.c -o lin.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o
clean:
	rm -f flag $(OBJS)

