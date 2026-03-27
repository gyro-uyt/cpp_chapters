# OOP (Object Oriented Programming)

# Constructor is a unique function that gets called automatically when an object is created of a class.
# Main purpose of a constructor is to initialise or assign values to the data members of that class.
# It cannot return any value other than 'None'
#
# Syntax:
# def __init__(self):
#   # initializations
#
# self is supplied automatically to the constructor by the class


class Person:
    def __init__(self, name, occ):
        print("This is python's constructor")
        self.name = name
        self.occ = occ

    name = "Harry"
    occ = "Software Developer"

    def info(self):
        print(f"{self.name} is a {self.occ}")


# there's no need for 'new' keyword to declare objects like in C++
a = Person("Harry", "Developer")
print(a.name)
# a.name = "Diva"
# a.occupation = "HR"
a.info()

b = Person("Diva", "HR")
b.info()
