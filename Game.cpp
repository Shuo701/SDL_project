//
//  Game.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/11/29.
//

#include "Game.hpp"

Game::Game(string Name, SDL_Renderer* renderer) : Screen(Name, renderer){
    selfTex = TextManager::loadTexture("IMG/map.gif", selfRender);
    desR.h=800;
    desR.w=600;
    desR.x=0;
    desR.y=0;
}

Game::~Game()
{}

void Game::handleEvent()
{
    SDL_PollEvent(&selfEvent);
    switch (selfEvent.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
            
        case SDL_KEYDOWN:
            //User presses a key
            
                //Select surfaces based on key press
                switch( selfEvent.key.keysym.sym )
                {
                    
                    case SDLK_SPACE:
                        isRunning = false;
                        break;
                    default:
                        selfTex = TextManager::loadTexture("images_?.png", selfRender);
                        break;
                }
            
            
        default:
            break;
    }
    
}
void Game::update(){
    
}
    
void Game::render(){
    SDL_RenderClear(selfRender);
    
    SDL_RenderCopy(selfRender, selfTex, NULL, &desR);
    
    
    SDL_RenderPresent(selfRender);
}
void Game::clean(){
    cout<<name<<" Clean!"<<endl;
}
