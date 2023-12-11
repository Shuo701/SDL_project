//
//  Screen.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/11.
//

#include "Screen.hpp"

Screen::Screen(string Name, SDL_Renderer* renderer){
    name = Name;
    selfRender = renderer;
    isRunning = true;
    
    desR.h=200;
    desR.w=200;
    desR.x=300;
    desR.y=300;
    
    cout<<name<<" Start"<<endl;
}
Screen::~Screen(){}

