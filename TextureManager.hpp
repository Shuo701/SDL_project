//
//  TextureManager.hpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/3.
//

#ifndef TextureManager_hpp
#define TextureManager_hpp

#include "allHeader.h"

class TextManager{
    public:
        static SDL_Texture *loadTexture(const char *fileName, SDL_Renderer *ren);
        
    
};

#endif /* TextureManager_hpp */
