CC=g++
CFLAGS=-lSDL2
DEPS = window.h
OBJ = main.cpp window.cpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tic-tac-toe: $(OBJ)
	$(CC) $^ $(CFLAGS) -o $@
