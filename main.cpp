//
//  main.cpp
//  GamingProject
//
//  Created by 李康碩 on 2023/11/29.
//

#include "allHeader.h"
#include "Game.hpp"
#include "Menu.hpp"
#include "ChooseCharacter.hpp"
#include "TextureManager.hpp"
#include "GameOver.hpp"

//.....global............
const int FPS =60;
const int frameDelay = 1000/FPS;
Uint32 frameStart;
int frameTime=0,cntTime=0;

string name;
bool mainIsRunning = false;

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event mainEvent;

//.......................


int main(int argc, const char * argv[]) {
    
    //......initial.......
    
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
        cout<<"main system initializing......."<<endl;
        window = SDL_CreateWindow("Game Page", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
        if(window)  cout<<"window created!"<<endl;
        renderer = SDL_CreateRenderer(window, -1, 0);
        if(renderer){
            SDL_SetRenderDrawColor(renderer, 200, 200, 200, 200);
            
            cout<<"renderer created!"<<endl;
        }
        mainIsRunning = true;
    }
    else{
        mainIsRunning = false;
    }
    
    Menu *menu = nullptr;
    ChooseCharater *choosecharacter = nullptr;
    Game *game = nullptr;
    GameOver *gameover = nullptr;
    
    
    //...Game Loop.............

    while(mainIsRunning){
        //..............menu.............
        
        name = "menu";
        menu = new Menu(name,renderer);
        
        while(menu->running()){
            
            frameStart = SDL_GetTicks();
            
            menu->handleEvent();
            menu->update();
            menu->render();
            
            SDL_PollEvent(&mainEvent);
            if(mainEvent.type == SDL_QUIT)  break;
            
            frameTime = SDL_GetTicks()-frameStart;
            if(frameDelay > frameTime)  SDL_Delay(frameDelay - frameTime);
        }
        
        menu->clean();
        delete menu;
        if(mainEvent.type == SDL_QUIT)  break;
        
        //....choose character...............
        
        name = "Choose Character";
        choosecharacter = new ChooseCharater(name, renderer);
        
        while(choosecharacter->running()){
            
            frameStart = SDL_GetTicks();
            
            choosecharacter->handleEvent();
            choosecharacter->update();
            choosecharacter->render();
            
            SDL_PollEvent(&mainEvent);
            if(mainEvent.type == SDL_QUIT)  break;
            
            frameTime = SDL_GetTicks()-frameStart;
            if(frameDelay > frameTime)  SDL_Delay(frameDelay - frameTime);
        }
        
        choosecharacter->clean();
        delete choosecharacter;
        
        //..........Game....................
        
        name = "Game";
        game = new Game(name,renderer);
        
        while(game->running()){
            
            frameStart = SDL_GetTicks();
            
            game->handleEvent();
            game->update();
            game->render();
            
            SDL_PollEvent(&mainEvent);
            if(mainEvent.type == SDL_QUIT)  break;
            
            frameTime = SDL_GetTicks()-frameStart;
            if(frameDelay > frameTime)  SDL_Delay(frameDelay - frameTime);
        }
        
        game->clean();
        delete game;
        if(mainEvent.type == SDL_QUIT)  break;
        
        //....GameOver............
        
        name = "GameOver";
        gameover = new GameOver(name,renderer);
        
        while(game->running()){
            
            frameStart = SDL_GetTicks();
            
            gameover->handleEvent();
            gameover->update();
            gameover->render();
            
            SDL_PollEvent(&mainEvent);
            if(mainEvent.type == SDL_QUIT)  break;
            
            frameTime = SDL_GetTicks()-frameStart;
            if(frameDelay > frameTime)  SDL_Delay(frameDelay - frameTime);
        }
        
        gameover->clean();
        delete gameover;
        if(mainEvent.type == SDL_QUIT)  break;
        
    }
    
    
    //....quit.......
    cout<<"destroy"<<endl;
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    cout<<"quit"<<endl;
    return 0;
}
