# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

# Directories
SRC_DIR = src

# Source files
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/complex.cpp $(SRC_DIR)/matrix.cpp

# Target executable
TARGET = program

# Default target
all: $(TARGET)

# Build the target
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up build files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean run
