# a simple Makefile

hima:  a.out  
        a.out

a.out:  hw.c
        gcc hw.c    

clean:
        rm -rf a.out
