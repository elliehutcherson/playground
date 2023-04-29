#include <iostream>
#include <stdio.h>

#include "SDL.h"
#include "SDL_image.h"

#include "dice/dice.h"
#include "experimental/experimental.h"


int main(int argc, char *argv[]) {
    SDL_Rect rect;
    rect.h = 0;
    SDL_Renderer* renderer = nullptr;
    SDL_LogInfo(0, "HELLO");
    experimental::Main();
    return 0;
}