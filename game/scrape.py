import requests
from pprint import pprint
import random

def get_pokemon_details(pokemon_name):
    response = requests.get(url=f'https://pokeapi.co/api/v2/pokemon/{pokemon_name.lower()}').json()
    type = response['types'][0]['type']['name']
    for stat in response['stats']:
        if stat['stat']['name'] == 'hp':
            hp = stat['base_stat']
        if stat['stat']['name'] == 'attack':
            attack = stat['base_stat']
    power, move_name = random_move_generator(response)
    return [type, hp, attack, power, move_name]

def random_move_generator(response):
    move_urls = [move['move']['name'] for move in response['moves']]
    move_selection_name = random.choice(move_urls)
    move_selection_url = [move['move']['url'] for move in response['moves'] if move['move']['name'] == move_selection_name]
    move_data = requests.get(url=move_selection_url[0]).json()
    move_selection_power = move_data['power']
    return move_selection_power, move_selection_name

print(get_pokemon_details('Ho-oh'))



    


get_pokemon_details('Kyogre')

