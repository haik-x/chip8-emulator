#ifndef KEYBOARD_H
#define KEYBOARD_H

#include<stdbool.h>
#include "config.h"

struct chip8_keyboard{

    bool keyboard[TOTAL_KEYS];

};

int keyboard_map(const char* map, char key); //key represents the physical key that is mapped to the virtual keyboard
void key_up(struct chip8_keyboard* keyboard, int key);
void key_down(struct chip8_keyboard* keyboard, int key);

//Check if the key is being pressed or not
bool is_down(struct chip8_keyboard* keyboard, int key);
bool is_up(struct chip8_keyboard* keyboard, int key); 


#endif