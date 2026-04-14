# Polymorphism = Greek word that means to "have many forms or faces"
#                Poly = Many
#                Morphe = Form

#                Two Ways to achieve Polymorphism
#                1. Inheritance = An object could be treated of the same type as a parent class
#                2. "Duck typing" = Object must have necessary attribute/methods


## 1. Inheritance

from abc import ABC, abstractmethod


class Shape:

    @abstractmethod
    def area(self):
        pass


class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * (self.radius**2)


class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side**2


class Triangle(Shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return 0.5 * self.base * self.height


# Pizza inherits Circle which inherits Shape, so Pizza is Pizza, Circle and Shape at same time (Many-forms)
class Pizza(Circle):
    def __init__(self, radius, topping):
        super().__init__(radius)
        self.topping = topping


shapes = [Circle(3), Square(4), Triangle(3, 6), Pizza(13, "Pepperoni")]

for shape in shapes:
    print(shape.area())


## 2. Duck Typing = Another way to achieve polymorphism besides Inheritance
#                  Object must have the minimum necessary attributes/methods
#                  "If it looks like a duck and quacks like a duck, itm must be a duck"


class Animal:
    alive = True


class Dog(Animal):
    def speak(self):
        print("WOOF!")


class Cat(Animal):
    def speak(self):
        print("MEOW!")


# This the duck even though it is not related to Animal or it's children classes but behaves like one of them
class Car:
    alive = True

    def speak(self):
        print("HONK!")


animals = [Dog(), Cat(), Car()]

for animal in animals:
    animal.speak()
    print(animal.alive)
