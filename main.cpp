#include <iostream>
#include "src/include/Pokemon.h"

int main() {


    Move thunderbolt("Thunderbolt", 90, "Electric");
    std::cout << "Created a Move: " << thunderbolt.name << std::endl;

    Pokemon pikachu("Pikachu", 100, thunderbolt, "Electric");
    std::cout << "Created a Pokemon: " << pikachu.name << std::endl;
    

    return 0;
}
