//
// Created by 黃偉誠 on 2023/12/11.
//
# include "Monster.h"
//#include "SDL.h"
#include "SDL_image.h"
# include <iostream>
# include "string"

using namespace std;

enum direction{UP, DOWN, LEFT, RIGHT};

// class position
position::position(int x, int y):x(x), y(y){} //x_min(range[0]), x_max(range[1]), y_min(range[2]), y_max(range[3]) {}
void position::chang_pos(int v_x, int v_y) {
    x += v_x;
    y += v_y;
    if ((x > x_max) || (x < x_min)) {x -= v_x;}
    if ((y > y_max) || (y < y_min)) {y -= v_y;}
}
int position::get_pos_x() const {return x;}
int position::get_pos_y() const {return y;}

// class monster
monster::monster(int hp, int damage_m, int damage_r, int loc_x, int loc_y, string dir): max_hp(hp), hp(hp), damage_melee(damage_m), damage_ranged(damage_r), location(loc_x, loc_y),picture(dir) {}
void monster::move(int x, int y) {location.chang_pos(x, y);}
int monster::get_damage(int damage_type = 0) {
    if (damage_type == 0){return damage_melee;}
    if (damage_type == 1){return damage_ranged;}
    else {return 0;}
}
void monster::take_damage(int damage) {
    hp -= damage;
    if (hp <= 0){alive = false;}
}
SDL_Surface* monster::get_picture() {
    if (alive){
        showing = !showing;
        return picture.get_photo(showing);
    }
    else{return picture.get_photo(2);}
}
bool monster::if_alive() {
    if (alive){return 1;} 
    else{return 0;}
}

// class photo
photos::photos(string directory) {
    for (int i = 0; i < N; i++){
        char data_name[] = "0.png";
        data_name [0] += i;
        string file_path = directory + data_name;
        picture[i] = IMG_Load(file_path.c_str());
    }
}
photos::~photos() {
    for(int i = 0; i < N; i++){
        SDL_FreeSurface( picture[ i ] );
        picture[ i ] = NULL;
    }
}
SDL_Surface* photos::get_photo(int i) {return picture[i];}

//monsters
Slime::Slime(int hp, int damage_melee, int damage_ranged, int loc_x, int loc_y): monster(hp, damage_melee, damage_ranged, loc_x, loc_y, directory){
    timer = SDL_GetTicks();
}
void Slime::move() {
    int if_move = (rand() % 100);
    if (if_move <= move_probability) {
        int direc = (rand() % 4);
        switch (direc) {
            case UP:
                monster::move(0, moving_speed);
                break;
            case DOWN:
                monster::move(0, -moving_speed);
                break;
            case LEFT:
                monster::move(-moving_speed, 0);
                break;
            case RIGHT:
                monster::move(moving_speed, 0);
                break;
        }
    }
}
bool Slime::if_shoot() {
    Uint32 interval = SDL_GetTicks() - timer;
    if (interval > firing_rate){
        int x = rand() % 4;
        if (x == 0){timer = SDL_GetTicks(); return true;}
        else{return false;}
    }
}
