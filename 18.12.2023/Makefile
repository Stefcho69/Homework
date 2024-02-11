all: help.out strcompare.out strconcat.out strlength.out

help.out:
	gcc main.c -o main.out
	
mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

strcompare.out: mystrings.o strcompare.c
	gcc strcompare.c mystrings.o -o strcompare.out

strconcat.out: mystrings.o strconcat.c
	gcc strconcat.c mystrings.o -o strconcat.out

strlength.out: mystrings.o strlength.c
	gcc strlength.c mystrings.o -o strlength.out

clean:
	rm -f *.out *.o

