from src.battle import Battle
from src.pokemon import Pokemon

def test_battle_class_has_2_pokemon():
    lvl_50_pikachu = Pokemon('Pikachu', 150, 75, 'thunderbolt')
    lvl_50_vaporeon = Pokemon('Vaporeon', 70, 19, 'hydro pump')
    test_battle = Battle(lvl_50_pikachu, lvl_50_vaporeon)

    #assert test_battle.pokemon_1 == lvl_50_pikachu
    assert test_battle.pokemon_1 == Pokemon('Vaporeon', 70, 19, 'hydro pump')