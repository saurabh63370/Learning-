class Car:
    def __init__(self, make, model):
        self.make = make
        self.model = model

    def display_info(self):
        print(f"This is a {self.make} {self.model}.")
display_info(12)