from src.pokemon import Pokemon


class Normal(Pokemon):
    def __init__(self):
        self.type = 'normal'
        self.strong_against = []
        self.weak_against = []

    def get_multiplier(self):
        if type in self.strong_against:
            return 1.5
        if type in self.weak_against:
            return 0.5
        else:
            return 1

