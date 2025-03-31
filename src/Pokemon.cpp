
#include "include/Pokemon.h"
#include <string>

Pokemon::Pokemon(std::string name, int hit_points, Move move, std::string type)
        : name(name), hit_points(hit_points), move(move), type(type)  {}


void Pokemon::take_damage(int damage) {
    hit_points -= damage;
}

bool Pokemon::has_fainted() {
    if (hit_points <= 0){
        return true;
    }
    return false;
}


