//
// Created by Simon Hossain on 16/07/2024.
//

#include "Pokemon.h"
#include <string>

class Pokemon {
public:
    std::string name;
    int hit_points;
    int attack_power;
    std::string move;
    std::string type;

    Pokemon(std::string name, int hit_points, int attack_power, std::string move) : name(name), hit_points(hit_points), attack_power(attack_power), move(move) {}

    virtual double get_multiplier(Pokemon* opponent) { return 1.0; }
    bool has_fainted() { return hit_points <= 0; }
};