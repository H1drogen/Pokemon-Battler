from src.pokemon import Pokemon


class Fire(Pokemon):
    def __init__(self):
        self.type = 'fire'
        self.strong_against = ['grass']
        self.weak_against = ['water']

    def get_multiplier(self):
        if type in self.strong_against:
            return 1.5
        if type in self.weak_against:
            return 0.5
        else:
            return 1

