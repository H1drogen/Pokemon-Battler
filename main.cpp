#include <iostream>
#include "src/include/Pokemon.h"
#include "src/include/Trainer.h"

int main() {


    Move thunderbolt("Thunderbolt", 90, "Electric");
    std::cout << "Created a Move: " << thunderbolt.name << std::endl;

    Pokemon pikachu("Pikachu", 100, thunderbolt, "Electric");
    std::cout << "Created a Pokemon: " << pikachu.name <<" with HP: " << pikachu.hit_points
    << std::endl;

    pikachu.take_damage(20);

    std::cout << "Pikachu took damage, remaining HP: " << pikachu.hit_points << std::endl;

    Pokemon charizard("Charizard", 150, Move("Flamethrower", 90, "Fire"), "Fire");

    std::cout << "Created a Pokemon: " << charizard.name <<" with HP: " << charizard.hit_points
    << std::endl;

    Trainer trainer;
    try {
        trainer.throw_pokeball(std::make_shared<Pokemon>(pikachu));
        std::cout << "Pikachu added to trainer's belt." << std::endl;

        trainer.throw_pokeball(std::make_shared<Pokemon>(charizard));
        std::cout << "Charizard added to trainer's belt." << std::endl;

    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    

    return 0;
}
