//
//  Game.hpp
//  GamingProject
//
//  Created by 李康碩 on 2023/11/29.
//

#ifndef Game_hpp
#define Game_hpp

#include "TextureManager.hpp"
#include "Screen.hpp"


class Game : public Screen{
public:
    Game(string Name, SDL_Renderer* renderer);
    ~Game();
    
    void handleEvent();
    void update();
    void render();
    void clean();
    
};


#endif /* Game_hpp */
