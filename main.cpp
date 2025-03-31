#include <iostream>
#include "src/Pokemon.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Move thunderbolt("Thunderbolt", 90, "Electric");
    std::cout << "Created a Move: " << thunderbolt.name << std::endl;

    Pokemon pikachu("Pikachu", 100, thunderbolt, "Electric");
    std::cout << "Created a Pokemon: " << pikachu.name << std::endl;
    

    return 0;
}
