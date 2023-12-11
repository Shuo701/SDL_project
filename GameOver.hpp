//
//  GameOver.hpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/9.
//

#ifndef GameOver_hpp
#define GameOver_hpp

#include "TextureManager.hpp"
#include "Screen.hpp"


class GameOver : public Screen{
public:
    GameOver(string Name, SDL_Renderer* renderer);
    ~GameOver();
    
    void handleEvent();
    void update();
    void render();
    void clean();
    
};

#endif /* GameOver_hpp */
