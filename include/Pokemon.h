#include <iostream>
#ifndef C___POKEMON_H
#define C___POKEMON_H

#include "Move.h"

class Pokemon {
public:
    std::string type;
    std::string name;
    int hit_points;
    Move move;

    Pokemon(std::string name, int hp, Move move, std::string type);
    void take_damage(int damage);
    bool has_fainted();

    // Additional methods as needed

};

#endif
