.PHONY: all build test clean

SRC_FILES := $(wildcard *.cpp) $(wildcard pattern)
BINS := $(SRC_FILES:%.cpp=%)

# Output File:
TARGET_EXTENSION := .out
TARGET_BASE := leddriver_test
TARGET = $(TARGET_BASE)$(TARGET_EXTENSION)

# Compiler Setup
CC := g++
LINKERFLAG := -lm
CFLAGS=-std=c++11

all: build test clean
 
build:
	@echo "Going to Compile now!"
	$(CC) $(CFLAGS) $(SRC_FILES) -o $(TARGET)

test:
	./$(TARGET)
						
clean:	
	@echo "Cleaning up..."
	rm $(TARGET)
	@echo "Done" 
