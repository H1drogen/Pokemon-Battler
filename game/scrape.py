import requests
from pprint import pprint

def get_pokemon_details(pokemon_name):
    response = requests.get(url=f'https://pokeapi.co/api/v2/pokemon/{pokemon_name.lower()}').json()
    type = response['types'][0]['type']['name']
    stats = response['stats']
    print(stats)


get_pokemon_details('Kyogre')

