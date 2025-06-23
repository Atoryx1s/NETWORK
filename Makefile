C = gcc
CFLAGS = -std=c11 -Werror -Wall
LDLIBS = -lm
OBJS = net.o main.o
OUTPUT = mvp
all: $(OUTPUT)

mvp: $(OBJS)
	$(CC) $(CFLAGS) -o mvp $(OBJS) -lm

net.o: net.c net.h
	$(CC) $(CFLAGS) -c net.c -o net.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o
clean:
	rm -f mvp $(OBJS)

