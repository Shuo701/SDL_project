//
//  Game.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/11/29.
//

#include "Game.hpp"
#include "TextureManager.hpp"

SDL_Texture *texPlayer;
SDL_Rect srcR, desR;
SDL_Event keyb;
int cnt;

Game::Game()
{}
Game::~Game()
{}
    
void Game::init(const char* title,int xpos,int ypos,int width,int height,bool fullscreen)
{
    int flag=0;
    if(fullscreen){
        flag = SDL_WINDOW_FULLSCREEN;
    }
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
        cout<<"system initializing......."<<endl;
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flag);
        if(window)  cout<<"window created!";
        renderer = SDL_CreateRenderer(window, -1, 0);
        if(renderer){
            SDL_SetRenderDrawColor(renderer, 200, 200, 200, 200);
            
            cout<<"renderer created!";
        }
        isRunning = true;
    }
    else{
        isRunning = false;
    }
    
    
    /*SDL_Surface *tempSurface=IMG_Load("start.png");
    texPlayer = SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);*/
    texPlayer = TextManager::loadTexture("start.png", renderer);
    desR.h=200;
    desR.w=200;
    desR.x=300;
    desR.y=300;
}
void Game::handleEvent()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
            
        case SDL_KEYDOWN:
            //User presses a key
            
                //Select surfaces based on key press
                switch( event.key.keysym.sym )
                {
                    case SDLK_1:
                        texPlayer = TextManager::loadTexture("p1.png", renderer);
                        break;
                    case SDLK_2:
                        texPlayer = TextManager::loadTexture("p2.png", renderer);
                        break;
                    case SDLK_3:
                        texPlayer = TextManager::loadTexture("p3.png", renderer);
                        break;
                        
                    default:
                        texPlayer = TextManager::loadTexture("images_?.png", renderer);
                        break;
                }
            
            
        default:
            break;
    }
    
}
void Game::update(){
    cnt++;
    cout<<cnt<<endl;
    
    
}
    
void Game::render(){
    SDL_RenderClear(renderer);
    //place to add stuff to render
    
    SDL_RenderCopy(renderer, texPlayer, NULL, &desR);
    
    SDL_RenderPresent(renderer);
}
void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    cout<<"Game Clean!";
}
