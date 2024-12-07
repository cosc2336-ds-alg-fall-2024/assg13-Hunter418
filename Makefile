PROJECT_NAME = assg13

# Directories
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

# Source files
assg_src = set.cpp QueueException.cpp
test_src = assg13-tests.cpp $(assg_src)

# Object files
test_obj = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(test_src))

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Werror -pedantic -std=c++17 -g -I$(INCLUDE_DIR)

# Targets
all: $(BIN_DIR)/$(PROJECT_NAME)-tests

$(BIN_DIR)/$(PROJECT_NAME)-tests: $(test_obj)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/*
