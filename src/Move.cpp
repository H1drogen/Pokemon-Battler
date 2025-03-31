//
// Created by Simon Hossain on 10/10/2024.
//

#include "include/Move.h"

Move::Move(std::string name, int power, std::string type) : name(name), power(power), type(type) {
    std::cout << "Move created: " << name << " with power: " << power << " and type: " << type << std::endl;
}