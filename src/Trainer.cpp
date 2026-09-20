
#include "../include/Trainer.h"
#include "../include/Pokemon.h"

#include <vector>
#include <memory>

void Trainer::catch_pokemon(std::shared_ptr<Pokemon> pokemon) {
    for (auto& slot : belt) {
        if (slot == nullptr) {
            slot = pokemon;
            return;
        }
    }
    throw std::runtime_error("Belt is full");
}