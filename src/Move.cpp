#include "Move.h"

Move::Move(std::string name, int power, std::string type) : name(name), power(power), type(type) {
    std::cout << "Move created: " << name << " with power: " << power << " and type: " << type << std::endl;
}