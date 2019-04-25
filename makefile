CC = gcc
CFLAGS = -Werror -Wall

.PHONY: clean start all

all: bin/main

bin/main: build/main.o build/board.o build/board_read.o build/board_print_plain.o
	$(CC) $(CFLAGS) -o $@ $^ 

build/main.o: src/main.c
	$(CC) $(CFLAGS) -MMD -c -o $@ $<

build/board.o: src/board.c
	$(CC) $(CFLAGS) -MMD -c -o $@ $<

build/board_read.o: src/board_read.c
	$(CC) $(CFLAGS) -MMD -c -o $@ $<

build/board_print_plain.o: src/board_print_plain.c
	$(CC) $(CFLAGS) -MMD -c -o $@ $<

start: bin/main
	bin/main

clean:
	rm build/*
# CC=gcc
# CFLAGS=-c -Wall - Werror
# SOURCES= src/main.c src/board.c src/board_read.c src/board_print_plain.c
# LIBS=
# OBJECT = $(SOURCES:.cpp=.o)
# EXECUTABLE=bin/main.exe

# .PHONY: clean start all

# all:	bin/main.exe
	
# bin/main.exe:	build/main.o build/board.o build/board_read.o build/board_print_plain.o
# 	$(CC) $(CFLAGS) -o $@ $^  

# build/main.o: src/main.c
# 	$(CC) $(CFLAGS) src/main.c

# build/board.o: src/board.c src/board.h
# 	$(CC) $(CFLAGS) src/board.c

# build/board_read.o: src/board_read.c
# 	$(CC) $(CFLAGS) src/board_read.c

# build/board_print_plain.o: src/board_print_plain.c
# 	$(CC) $(CFLAGS) src/board_print_plain.c

# clean:
# 	rm  build/*
# 	rm  bin/*
