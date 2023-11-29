# a simple Makefile

hima:  a.out  
	a.out

a.out:	hw.c
	gcc hw.c    

test:	a.out
	a.out Test123

debug:	hw.c
	gcc -DDEBUG hw.c

clean:
	rm -rf a.out
