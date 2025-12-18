# Generic Makefile for compiling any C file

# Compiler
CC = gcc

# Compiler flags
# CFLAGS = -Wall -Wextra -std=c11

# Get the source file from command line, default to "main.c"
SRC ?= main.c

# Derive output executable name from source file
OUT = $(basename $(SRC))

# Default target: compile
all: $(OUT)

# Compile the C file
$(OUT): $(SRC)
	$(CC) $< -o $@

# Run the executable
run: $(OUT)
	./$(OUT)

# Clean generated executable
clean:
	rm -f $(OUT)

.PHONY: all run clean
