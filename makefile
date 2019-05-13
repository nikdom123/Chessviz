CC = gcc
CFLAGS = -std=gnu11 -Werror -Wall

.PHONY: clean start all

all: bin/main

test: bin/main-test

-include build/*.d

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

-include build-test/*.d

bin/main-test: build-test/main.o build/board_print_plain.o build-test/board.o build-test/test.o
	$(CC) $(CFLAGS) -o $@ $^

build-test/main.o: test/main.c
	$(CC) -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build-test/board.o: src/board.c
	$(CC) -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<

build-test/test.o: test/test.c
	$(CC) -I thirdparty -I src $(CFLAGS) -MMD -c -o $@ $<


start: bin/main
	bin/main

clean:
	rm build/*
	rm build-test/*
