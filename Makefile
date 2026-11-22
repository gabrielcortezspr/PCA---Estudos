# Builds every exercise into build/<folder>/<name>.
#   make            build everything
#   make clean      remove build/

CC      ?= gcc
CFLAGS  ?= -std=c11 -w
LDLIBS  := -lm

SOURCES := $(wildcard [01]*/*.c)
BINS    := $(patsubst %.c,build/%,$(SOURCES))

all: $(BINS)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)

clean:
	rm -rf build

.PHONY: all clean
