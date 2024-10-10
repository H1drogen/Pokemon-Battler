//
// Created by Simon Hossain on 10/10/2024.
//

#ifndef C___MOVE_H
#define C___MOVE_H

#include <string>
#include <iostream>


class Move {
public:
    std::string name;
    int power;
    std::string type;

    Move(std::string name, int power, std::string type);

};


#endif //C___MOVE_H
