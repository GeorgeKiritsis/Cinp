CC = gcc

CFLAGS = -I./inc -Wall -Wextra -std=c99

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(EXEC)

exec:
	./main

.PHONY: all clean

