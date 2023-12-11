//
//  ChooseCharacter.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/6.
//

#include "ChooseCharacter.hpp"

ChooseCharater::ChooseCharater(string Name, SDL_Renderer* renderer) : Screen(Name, renderer){}
ChooseCharater::~ChooseCharater(){}
    
void ChooseCharater::handleEvent()
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
                    case SDLK_1:
                        selfTex = TextManager::loadTexture("p1.png", selfRender);
                        break;
                    case SDLK_2:
                        selfTex = TextManager::loadTexture("p2.png", selfRender);
                        break;
                    case SDLK_3:
                        selfTex = TextManager::loadTexture("p3.png", selfRender);
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

void ChooseCharater::update(){}
    
void ChooseCharater::render(){
    SDL_RenderClear(selfRender);
    
    SDL_RenderCopy(selfRender, selfTex, NULL, &desR);
    
    SDL_RenderPresent(selfRender);
    
}

void ChooseCharater::clean(){
    
    cout<<name<<" Clean!"<<endl;
}
