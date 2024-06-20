from src.pokemon import Pokemon


class Water(Pokemon):
    def __init__(self):
        self.type = 'water'
        self.strong_against = ['fire']
        self.weak_against = ['grass', 'electric']

    def get_multiplier(self):
        if type in self.strong_against:
            return 1.5
        if type in self.weak_against:
            return 0.5
        else:
            return 1
