# Inheritance = Allows a class to inherit attributes and methods from another class
#               Helps with code reusability and extensibility
# Syntax: class Child(Parent)


class Animal:
    def __init__(self, name):
        self.name = name
        self.is_alive = True

    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
        print(f"{self.name} is asleep")


class Cat(Animal):
    def speak(self):
        print("Meow")


class Dog(Animal):
    def speak(self):
        print("Woof Woof")


class Mouse(Animal):
    def speak(self):
        print("Squeak")


dog = Dog("Edward")
cat = Cat("Madame")
mouse = Mouse("Mickey")

dog.eat()
dog.sleep()
dog.speak()

cat.speak()
mouse.speak()
