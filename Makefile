# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -O2 -std=c++17

# Directories
SRC_DIR = src
BUILD_DIR = build

# Target executable
TARGET = $(BUILD_DIR)/main

# Source file
SRCS = $(SRC_DIR)/main.cpp

# Object files
OBJS = $(BUILD_DIR)/$(notdir $(SRCS:.cpp=.o))

# Default target
all: $(TARGET)

# Ensure build directory exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build the target
$(TARGET): $(BUILD_DIR) $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Build object files in the build directory
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Clean up build files
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean run
