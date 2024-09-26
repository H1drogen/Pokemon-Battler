
#include "Trainer.h"
#include "../Pokemon.h"

#include <vector>
#include <memory>

class Trainer {
public:
    std::vector<std::shared_ptr<Pokemon>> belt;

    Trainer() : belt(6, nullptr) {}

    void throw_pokeball(std::shared_ptr<Pokemon> pokemon) {
        for (auto& slot : belt) {
            if (slot == nullptr) {
                slot = pokemon;
                return;
            }
        }
        throw std::runtime_error("Belt is full");
    }
};