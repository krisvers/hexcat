CC := gcc

.PHONY: all build

all: build

build:
	$(CC) main.c -o hexcat
