//
//  TextureManager.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/12/3.
//

#include "TextureManager.hpp"


SDL_Texture* TextManager :: loadTexture(const char *texture, SDL_Renderer *ren){
    
    SDL_Surface *tempSurface = IMG_Load(texture);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);
    
    return tex;
}
