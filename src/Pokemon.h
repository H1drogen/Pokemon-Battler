#include <iostream>
#ifndef C___POKEMON_H
#define C___POKEMON_H

class Pokemon {
public:
    std::string name;
    int hit_points;
    int attack_damage;
    std::string move;

    Pokemon(std::string name, int damage);
    void take_damage(int damage);
    bool has_fainted();
    // Additional methods as needed

};

#endif //C___POKEMON_H
