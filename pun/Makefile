CC=gcc
CFLAGS=-I.
# DEPS = pun.h
OBJ = pun.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pun: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ core

