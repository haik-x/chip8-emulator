#ifndef REGISTERS_H
#define REGISTERS_H

#include "config.h"

struct chip8_registers{

    unsigned char V[GENERAL_PURPOSE_REGISTERS];
    unsigned short I;
    unsigned char dt;
    unsigned char st;
    //Program counter register has the address of the next instruction to be excecuted from memory
    //Needed for tracking the current execution point
    unsigned short PC;
    //The stack pointer is a small register that stores the memory address of the last data element added to the stack
    unsigned char SP;
    
};


#endif