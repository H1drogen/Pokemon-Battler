#include <iostream>
#include "src/Pokemon.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Pokemon pikachu("Pikachu", 100, "Thunderbolt", 30);
    std::cout << "Created a Pokemon: " << pikachu.name << std::endl;
    

    return 0;
}
