//
//  Menu.hpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/5.
//

#ifndef Menu_hpp
#define Menu_hpp

#include "TextureManager.hpp"
#include "Screen.hpp"

class Menu : public Screen{
public:
    Menu(string Name, SDL_Renderer* renderer);
    ~Menu();
    
    void handleEvent();
    void update();
    void render();
    void clean();
    
};

#endif /* Menu_hpp */
