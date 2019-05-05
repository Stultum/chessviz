PP = g++
CC = gcc
CFLAGS = -c -Wall -Werror

all:bin/chess.exe

bin/chess.exe:build/src/board.o build/src/board_print_plain.o build/src/main.o
	$(PP) -Wall -Werror build/src/board.o build/src/board_print_plain.o build/src/main.o -o $@
	
build/src/main.o:src/main.cpp
	$(PP) -I src $(CFLAGS) src/main.cpp -o $@

build/src/board.o:src/board.cpp
	$(PP) $(CFLAGS) src/board.cpp -o $@

build/src/board_print_plain.o:src/board_print_plain.cpp
	$(PP) $(CFLAGS) src/board_print_plain.cpp -o $@

test:bin/test.exe

bin/test.exe: build/test/tests.o build/test/main.o build/test/board.o
	$(CC) -Wall build/test/tests.o build/test/main.o build/test/board.o -o $@
	
build/test/tests.o: test/tests.c
	$(CC) -I thirdparty src -c -Wall test/tests.c -o $@

build/test/main.o: test/main.c
	$(CC) -I thirdparty -c -Wall test/main.c -o $@	
	
build/test/board.o: src/board.c
	$(CC) -c -Wall src/board.c -o $@

.PHONY:all clean install uninstall

clean:
	rm -rf build/src/*.o bin/chess.exe build/test/*.o