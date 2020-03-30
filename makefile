CC=g++
CFLAGS=-pedantic -Wall -std=c++14 -iquote inc

DEPS=LZespolona.hh WyrazenieZesp.hh test.hh stat.hh

OBJ=main.o LZespolona.o WyrazenieZesp.o test.o stat.o

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testz: $(OBJ) 
	$(CC) -o testz.x $(OBJ)

clean:
	rm *.o *~

del:
	rm imager_v3.x
