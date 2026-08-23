# FT Zurich Piscine

This repository contains my C programming exercises for Piscine C00.

## Requirements

- GCC compiler
- Linux or another Unix-like system

## Compile & Run

To compile a C file:

```bash
./mian
```

## Project Structure

```text
C00/
├── include
├─ src
|── main.c
├── lib
├── Makefile
└── README.md
```

## Building the library

The static library file `libft_zurich.a` is not tracked by Git because compiled archives can differ between operating systems and toolchains. Build it locally on the operating system where you intend to use it.

```bash
cd ft_zurich
gcc -Wall -Wextra -Werror -Iinclude -c src/ft_strlen.c -o build/ft_strlen.o
gcc -Wall -Wextra -Werror -Iinclude -c src/ft_putchar.c -o build/ft_putchar.o
ar rcs lib/libft_zurich.a build/ft_strlen.o build/ft_putchar.o
```

### Copy for use in another project

After building, copy the library and the public header files into your project:

```sh

cp ft_zurich/lib/libft_zurich.a C00/lib/
cp ft_zurich/include/*.h C00/include/
```

Build the library separately on every target operating system. Do not copy a library archive built on one OS to another OS; instead, clone or copy the source code there and run the build command again.

### Makefile

```sh
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
```

## Screenshot

![My C project in VS Code](assets/1.png)
