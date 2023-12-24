//
// Created by 黃偉誠 on 2023/12/11.
//
# include "SDL.h"
# include <string>
#ifndef SDL_MONSTER_H
#define SDL_MONSTER_H
    //basic setting
    // *modify the directory path for pictures
const std::string picture_directory = "/Users/kevin/Desktop/monster_picture_library";

class position{
private:
    int x, y;
    static const int x_min = 0, x_max = 640, y_min = 0, y_max = 480; //set map range
public:
    position(int x, int y);
    void chang_pos(int v_x, int v_y);
    int get_pos_x() const;
    int get_pos_y() const;
};

class photos{
private:
    const int N = 3;
    SDL_Surface* picture[3];
public:
    photos(std::string file_path);
    ~photos();
    SDL_Surface* get_photo(int);
};

class monster{
private:
    const int max_hp;
    int hp;
    int damage_melee, damage_ranged;
    //int firing_rate;   (not implement)
    //int moving_speed;  (not implement)
    bool alive = true;
    bool showing = true; // control which picture to show when alive
    photos picture;
    position location;
public:
    // initialize the monster with max
    monster(int hp, int damage_m, int damage_r, int loc_x, int loc_y, std::string dir);
    void move(int x, int y);
    int get_damage(int damage_type);   // get the value of damage( 0: melee damage; 1: ranged damage)
    void take_damage(int);
    SDL_Surface* get_picture();
    bool if_alive();

};
    // monsters created
class Slime: private monster{
private:
    const std::string directory = picture_directory + "/Slime";
public:
    Slime(int hp = 50, int damage_melee = 1, int damage_ranged = 0, int loc_x = 25, int loc_y = 25);
};

#endif //SDL_MONSTER_H
