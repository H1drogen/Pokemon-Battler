cmake_minimum_required(VERSION 3.28)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp
        Pokemon.h
        src/Pokemon.cpp
        src/Pokemon.h
        src/Trainer.cpp
        src/Trainer.h
        src/Battle.cpp
        src/Pokeball.cpp
        src/Pokeball.h)
