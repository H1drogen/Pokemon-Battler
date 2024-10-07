#include <iostream>
#ifndef C___POKEMON_H
#define C___POKEMON_H

class Pokemon {
public:

    std::string name;
    int hit_points;
    int attack_power;
    std::string move;

    Pokemon(std::string name, int hp, std::string move, int power);
    void take_damage(int damage);
    bool has_fainted();

    // Additional methods as needed

};

#endif
