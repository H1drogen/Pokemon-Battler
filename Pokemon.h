//
// Created by Simon Hossain on 16/07/2024.
//

// Pokemon.h
#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
public:
    std::string name;
    int attack_damage;

    Pokemon(std::string name, int damage);
    void take_damage(int damage);
    bool has_fainted();
    // Additional methods as needed
};

#endif // POKEMON_H
