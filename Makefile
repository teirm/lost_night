INC_DIR = include
CXX=clang++
CXXFLAGS=-I$(INC_DIR) -std=c++11 -Wall -Wextra -Werror

ODIR= objects
LDIR = library
SRC_DIR = source

ENEMIES_DIR = $(SRC_DIR)/enemies
ENGINE_DIR = $(SRC_DIR)/engine
PLAYER_DIR = $(SRC_DIR)/player
JOB_DIR = $(SRC_DIR)/jobs

ENGINE_INCLUDE = $(INC_DIR)/engine
PLAYER_INCLUDE = $(INC_DIR)/player
JOB_INCLUDE = $(INC_DIR)/jobs
ENEMIES_INCLUDE = $(INC_DIR)/enemies

#LIBS=-lm

_ENGINE_DEPS = Menu.H
ENGINE_DEPS = $(patsubst %,$(ENGINE_INCLUDE)/%,$(_ENGINE_DEPS))

_PLAYER_DEPS = Player.H
PLAYER_DEPS = $(patsubst %,$(PLAYER_INCLUDE)/%,$(_PLAYER_DEPS))

_JOB_DEPS = Job.H
JOB_DEPS = $(patsubst %,$(JOB_INCLUDE)/%,$(_JOB_DEPS))

_ENEMIES_DEPS = Enemy.H
ENEMY_DEPS = $(patsubst %,$(ENEMIES_INCLUDE)/%,$(_ENEMIES_DEPS))

# _DEPS = Menu.H Player.H
# DEPS = $(patsubst %,$(INC_DIR)/%,$(_DEPS))

_ENGINE_OBJ = main.o  Menu.o
ENGINE_OBJ = $(patsubst %,$(ODIR)/%,$(_ENGINE_OBJ))

_PLAYER_OBJ = Player.o
PLAYER_OBJ = $(patsubst %,$(ODIR)/%,$(_PLAYER_OBJ))

_ENEMIES_OBJ = Enemy.o
ENEMY_OBJ = $(patsubst %,$(ODIR)/%,$(_ENEMIES_OBJ))

# .o depends on .c version and .h
# $@ left of :
# $< first item of DEPS
$(ODIR)/%.o: $(ENGINE_DIR)/%.cpp $(ENGINE_DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(ODIR)/%.o: $(PLAYER_DIR)/%.cpp $(PLAYER_DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(ODIR)/%.o: $(ENEMIES_DIR)/%.cpp $(ENEMIES_DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# $^ right of :
game: $(PLAYER_OBJ) $(ENGINE_OBJ) $(ENEMIES_OBJ) 
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o
	rm -f game
