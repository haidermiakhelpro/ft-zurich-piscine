NAME := bin/app

CC := gcc
CFLAGS := -Wall -Wextra -Werror -Iinclude
LDFLAGS := -Llib
LDLIBS := -lft_zurich

SRC := $(shell find src -name "*.c")
OBJ := $(patsubst src/%.c,build/%.o,$(SRC))

$(NAME): $(OBJ) lib/libft_zurich.a
	@mkdir -p bin
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS) $(LDLIBS)

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf bin build

.PHONY: clean