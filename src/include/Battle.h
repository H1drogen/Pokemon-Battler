//
// Created by Simon Hossain on 01/04/2025.
//

#ifndef C___BATTLE_H
#define C___BATTLE_H

#include <memory>
#include "Pokemon.h"


class Battle {
public:
    Battle(std::shared_ptr<Pokemon> p1, std::shared_ptr<Pokemon> p2);
    void take_turn();
    std::shared_ptr<Pokemon> determine_winner();

private:
    std::shared_ptr<Pokemon> pokemon1;
    std::shared_ptr<Pokemon> pokemon2;

};


#endif //C___BATTLE_H
