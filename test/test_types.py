from src.types.electric  import Electric
from src.pokemon import Pokemon

def test_get_multiplier_returns_correct_multiplier():
    name = 'Pikachu'
    hp = 150
    damage = [75, 'electric']
    move = 'thunderbolt'
    lvl_50_pikachu = Pokemon(name, hp, damage, move)
    test_function = Electric(lvl_50_pikachu)
    get_multiplier = test_function.get_multiplier()
    assert get_multiplier == 1