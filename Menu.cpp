//
//  Menu.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/5.
//

#include "Menu.hpp"

Menu::Menu(string Name, SDL_Renderer* renderer) : Screen(Name, renderer){}
Menu::~Menu(){}
    

void Menu::handleEvent()
{
    SDL_PollEvent(&selfEvent);
    switch (selfEvent.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
            
        case SDL_KEYDOWN:
                switch( selfEvent.key.keysym.sym )
                {
                    case SDLK_0:
                        selfTex = TextManager::loadTexture("images_?.png", selfRender);
                        break;
                    case SDLK_SPACE:
                        isRunning = false;
                        break;
                }
            
        default:
            break;
    }
}

void Menu::update(){}
    
void Menu::render(){
    SDL_RenderClear(selfRender);
    
    SDL_RenderCopy(selfRender, selfTex, NULL, &desR);
    
    SDL_RenderPresent(selfRender);
}

void Menu::clean(){
    cout<<name<<" Clean"<<endl;
}
