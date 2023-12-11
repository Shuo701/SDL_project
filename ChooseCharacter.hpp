//
//  ChooseCharacter.hpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/6.
//

#ifndef ChooseCharacter_hpp
#define ChooseCharacter_hpp

#include "TextureManager.hpp"
#include "Screen.hpp"


class ChooseCharater : public Screen{
public:
    ChooseCharater(string Name, SDL_Renderer* renderer);
    ~ChooseCharater();
    
    void handleEvent();
    void update();
    void render();
    void clean();
    
};


#endif /* ChooseCharacter_hpp */
