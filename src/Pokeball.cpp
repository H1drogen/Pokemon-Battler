
#include "include/Pokeball.h"

#include <memory>
#include <stdexcept>
#include "include/Pokemon.h" // Include the base Pokemon class header



class Pokeball {
    std::shared_ptr<Pokemon> pokemon;

public:
    Pokeball() : pokemon(nullptr) {}

    void catchPokemon(std::shared_ptr<Pokemon> newPokemon) {
        if (!pokemon) {
            pokemon = newPokemon;
        } else {
            throw std::runtime_error("Pokeball already contains a Pokemon");
        }
    }

    bool isEmpty() const {
        return !pokemon;
    }


};
