cmake_minimum_required(VERSION 3.28)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp
        src/Pokemon.cpp
        include/Pokemon.h
        src/Trainer.cpp
        include/Trainer.h
        src/Battle.cpp
        src/Pokeball.cpp
        include/Pokeball.h
        src/Move.cpp
        include/Move.h
        include/Battle.h
)
