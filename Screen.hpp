//
//  Screen.hpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/11.
//

#ifndef Screen_hpp
#define Screen_hpp

#include "TextureManager.hpp"

class Screen{
public:
    Screen(string Name, SDL_Renderer* renderer);
    ~Screen();
    
    bool running(){return isRunning;}

    bool isRunning;
    string name;
    
    SDL_Texture *selfTex;
    SDL_Rect desR;
    SDL_Renderer *selfRender;
    SDL_Event selfEvent;
};

#endif /* Screen_hpp */
