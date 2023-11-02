.PHONY: all program main.c utility.c
all: blah

say_hello:
	@echo "Hello World"

generate:
	@echo "Creating empty text files..."
	touch file-{1..10}.txt

program: main.c utility.c
	@echo "done"

blah: blah.o

blah.c:
	echo "int main() { return 0; }" > blah.c

clean:
	rm -f blah*

main.c: main-source.c
	cp main-source.c main.c

utility.c: utility-source.c
	cp utility-source.c utility.c

clean:
	@echo "Cleaning up..."
	rm *.txt blah blah.o blah.c main* utility*
