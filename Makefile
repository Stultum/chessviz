all:
	g++ -o stdout -Wall -Werror stdout.c

test:
	./stdout
clean:
	rm stdout