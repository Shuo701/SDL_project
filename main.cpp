//
//  main.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/11/29.
//

#include "Game.hpp"


Game *game = nullptr;

int main(int argc, const char * argv[]) {
    
    game = new Game();
    game->init("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    
    const int FPS =60;
    const int frameDelay = 1000/FPS;
    Uint32 frameStart;
    int frameTime;
    
    while(game->running()){
        
        frameStart = SDL_GetTicks();
        
        game->handleEvent();
        game->update();
        game->render();
        
        frameTime = SDL_GetTicks()-frameStart;
        if(frameDelay > frameTime)  SDL_Delay(frameDelay - frameTime);
    }
    
    game->clean();
    
    return 0;
}
