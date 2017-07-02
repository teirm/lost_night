INC_DIR = ../include
CXX=clang++
CXXFLAGS=-I$(INC_DIR) -std=c++11 -Wall -Wextra

ODIR=../obj
LDIR = ../lib

#LIBS=-lm

_DEPS = Menu.h Player.h
DEPS = $(patsubst %,$(INC_DIR)/%,$(_DEPS))

_OBJ = main.o Player.o Menu.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# .o depends on .c version and .h
# $@ left of :
# $< first item of DEPS
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# $^ right of :
game: $(OBJ) 
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o
	rm -f game
