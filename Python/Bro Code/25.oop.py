# Python OOPs (Object-Oriented Programming)

# object = A "bundle" of related attributes (variables) and methods (functions)
#           Ex. phone, cup, book
#           You need a "class" to create many objects
# Note: A 'method' is a function that belongs to an object, so they're not same

# class = (blueprint) used to design the structure and layout of an object


class Car:
    # constructor -- needed to make class
    def __init__(self, model, year, color):
        self.model = model
        self.year = year
        self.color = color

    def drive(self):
        print(f"You drive the {self.color} {self.model}")


car1 = Car("Mercedes AMG-GT", 2024, "Green")
car2 = Car("BMW M5", 2018, "Blue")
car3 = Car("Ferrari 849 Testarossa", 2024, "Red")
car4 = Car("Rolls Royce Spectre", 2020, "Black")
car5 = Car("McLaren 750S", 2021, "Orange")
car6 = Car("Porsche 911", 2027, "White-Blue")

print(car1)  # prints the memory address of the object

print(car1.model, car1.color, car1.year)
print(car2.model, car2.color, car2.year)
print(car3.model, car3.color, car3.year)
print(car4.model, car4.color, car4.year)
print(car5.model, car5.color, car5.year)
print(car6.model, car6.color, car6.year)

car6.drive()
