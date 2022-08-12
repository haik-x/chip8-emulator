INCLUDES = -I ./include
FLAGS = -g
OBJETCS =./build/chip8memory.o ./build/stack.o

all: ${OBJETCS}
	gcc ${FLAGS} ${INCLUDES} ./src/main.c ${OBJETCS} -L ./lib -lmingw32 -lSDL2main -lSDL2 -o ./bin/main

./build/chip8memory.o:src/chip8memory.c
	gcc ${FLAGS} ${INCLUDES} ./src/chip8memory.c -c -o ./build/chip8memory.o

./build/stack.o:src/stack.c
	gcc ${FLAGS} ${INCLUDES} ./src/stack.c -c -o ./build/stack.o