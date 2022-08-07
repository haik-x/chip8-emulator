#include "chip8memory.h"

static void chip8_within_bounds(int index){
    assert(index >=0 && index < CHIP8_MEMORY_SIZE);
}

void set_memory(struct chip8_memory* memory, int index, unsigned char val){

    chip8_within_bounds(index);
    memory->memory[index] = val;
}


unsigned char get_memory(struct chip8_memory* memory, int index){

    chip8_within_bounds(index);
    return memory->memory[index];
}
