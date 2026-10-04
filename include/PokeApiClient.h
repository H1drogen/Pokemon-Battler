

#ifndef C___POKEAPICLIENT_H
#define C___POKEAPICLIENT_H
#include "Pokemon.h"


class PokeApiClient {
public:
    Pokemon fetchRandomPokemon();
    Pokemon fetchPokemon(const std::string& name);
};


#endif //C___POKEAPICLIENT_H
