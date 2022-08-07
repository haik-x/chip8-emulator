#ifndef CHIP8MEMORY_H
#define CHIP8MEMORY_H

#include "config.h"
#include <assert.h>

struct chip8_memory{
    unsigned char memory[CHIP8_MEMORY_SIZE];
};

//Functions related to the managemente of memory

void set_memory(struct chip8_memory* memory, int index, unsigned char val);
unsigned char get_memory(struct chip8_memory* memory, int index);

#endif