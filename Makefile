start: start.c
	gcc -o start start.c
main: *
	gcc -o main ws4h.c -lpthread
