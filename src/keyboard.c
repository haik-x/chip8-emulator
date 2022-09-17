#include "keyboard.h"
#include <assert.h>

static void keyboard_in_bounds(int key){
    assert(key >= 0 && key < TOTAL_KEYS);
}
int keyboard_map(const char* map, char key){

    for(int i=0; i<TOTAL_KEYS; i++){

        if(map[i] == key){
            return i;
        }
    }
    return -1;
}

void key_down(struct chip8_keyboard* keyboard, int key){

    keyboard->keyboard[key] = true;

}

void key_up(struct chip8_keyboard* keyboard, int key){
    keyboard->keyboard[key] = false;
}

bool is_down(struct chip8_keyboard* keyboard, int key){
    return keyboard->keyboard[key];
}


