source = src/main.cpp src/board.cpp src/board_print_plain.cpp
executable = bin/chess
objects = build/main.o build/board.o build/board_print_plain.o

all: $(executable)

$(executable):$(objects)
	g++ $(objects) -o $@

build/%.o: src/%.cpp
	g++ -c $< -o $@


.PHONY: clean

clean:
	rm -rf build/*.o bin/chess