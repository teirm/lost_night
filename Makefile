CC=g++
CFLAGS=-I -Wall -Wextra
DEPS = Menu.h Player.h

# .o depends on .c version and .h
# $@ left of :
# $< first item of DEPS
%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# $^ right of :
gamemake: main.o
	$(CC) -o $@ $^ $(CFLAGS) 
