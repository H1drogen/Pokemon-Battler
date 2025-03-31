cmake_minimum_required(VERSION 3.28)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp
        src/Pokemon.cpp
        src/include/Pokemon.h
        src/Trainer.cpp
        src/include/Trainer.h
        src/Battle.cpp
        src/Pokeball.cpp
        src/include/Pokeball.h
        src/Move.cpp
        src/include/Move.h
)
