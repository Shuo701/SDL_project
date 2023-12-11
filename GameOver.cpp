//
//  GameOver.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/9.
//

#include "GameOver.hpp"

GameOver::GameOver(string Name, SDL_Renderer* renderer) : Screen(Name, renderer){}
GameOver::~GameOver(){}


void GameOver::handleEvent()
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
                    case SDLK_w:
                        selfTex = TextManager::loadTexture("win.webp", selfRender);
                        break;
                    case SDLK_l:
                        selfTex = TextManager::loadTexture("lose.jpeg", selfRender);
                        break;
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

void GameOver::update(){}
    
void GameOver::render(){
    SDL_RenderClear(selfRender);
    SDL_RenderCopy(selfRender, selfTex, NULL, &desR);
    SDL_RenderPresent(selfRender);
}

void GameOver::clean(){
    /*SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
     
    SDL_Quit();*/
    cout<<name<<" Clean!"<<endl;
}
