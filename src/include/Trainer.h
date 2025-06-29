
#ifndef C___TRAINER_H
#define C___TRAINER_H

#include <iostream>
#include <vector>

class Trainer {
public:
    std::vector<std::shared_ptr<Pokemon>> belt;

    Trainer() : belt(6, nullptr) {}
    void throw_pokeball();
};

#endif //C___TRAINER_H
