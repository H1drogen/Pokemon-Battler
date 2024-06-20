from src.pokemon import Pokemon


class Grass(Pokemon):
    def __init__(self):
        self.type = 'grass'
        self.strong_against = ['water']
        self.weak_against = ['fire']

    def get_multiplier(self):
        if type in self.strong_against:
            return 1.5
        if type in self.weak_against:
            return 0.5
        else:
            return 1