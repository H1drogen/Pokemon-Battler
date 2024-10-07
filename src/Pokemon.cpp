
#include "Pokemon.h"
#include <string>

Pokemon::Pokemon(std::string name, int hit_points, std::string move, int attack_power)
        : name(name), hit_points(hit_points), attack_power(attack_power), move(move) {}


void Pokemon::take_damage(int damage) {
    hit_points -= damage;
}

bool Pokemon::has_fainted() {
    return hit_points <= 0;
}