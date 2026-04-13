class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} is eating")

    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
        print(f"{self.name} is sleeping")


class Prey(Animal):
    def flee(self):
        print(f"{self.name} is fleeing")


class Predator(Animal):
    def hunt(self):
        print(f"{self.name} is hunting")


class Rabbit(Prey):
    pass


class Hawk(Predator):
    pass


class Fish(Prey, Predator):
    pass


rabbit = Rabbit("Bugs")
hawk = Hawk("Tony")
fish = Fish("Nem")

hawk.sleep()
hawk.eat()

fish.hunt()
fish.eat()
fish.flee()

rabbit.sleep()
rabbit.flee()
