#include <SDL2/SDL.h>
#include <iostream>

using namespace std;
 
int main(int argc, char ** argv)
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0 ) {
        cout << "failed" << endl;
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Fire", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

    if (window == NULL) {
        return 2;
        SDL_Quit();
    }

    bool quit = false;
    SDL_Event event;

    while(!quit){
        
        while (SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT){
                quit = true;
            }

        }

    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}