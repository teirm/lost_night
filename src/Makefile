INC_DIR = ../include
CC=g++
CFLAGS=-I$(INC_DIR) -Wall -Wextra

ODIR=../obj
LDIR = ../lib

#LIBS=-lm

_DEPS = Menu.h Player.h
DEPS = $(patsubst %,$(INC_DIR)/%,$(_DEPS))

_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# .o depends on .c version and .h
# $@ left of :
# $< first item of DEPS
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# $^ right of :
game: $(OBJ) 
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INC_DIR)
