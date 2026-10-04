cmake_minimum_required(VERSION 3.28)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__
        main.cpp
        src/Pokemon.cpp
        src/Trainer.cpp
        src/Battle.cpp
        src/Pokeball.cpp
        src/Move.cpp
        src/PokeApiClient.cpp
        include/PokeApiClient.h
)

target_include_directories(C__ PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
