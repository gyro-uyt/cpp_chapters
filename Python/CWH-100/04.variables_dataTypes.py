# EVERYTHING in Python is Class, Object, variable, data, string, all,,
import sys

print("Hello, world")

name = "Sergio"
print(sys.getsizeof(name))
print(type(name))

"""
There are 3 types of lists available:
    1. List == []           <- Ordererd collection of data  <-- Mutable   == can be modified
    2. Tuple == ()          <- Ordered collection of data   <-- Immutable == cannot be modified
    3. Dictionary == {}     <- Unordered collection of data
"""

a = 55
b = "Hello"
c = 69.90
d = 1234567890
e = True
f = None

g = complex(6, 9)  # complex data_type
print(g)

x1 = 12
x2 = 25
print(x1 + x2)  # data type should be same of x1, x2

print("type of 'a' is ", type(a))
print("type of 'b' is ", type(b))
print("type of 'c' is ", type(c))
print("type of 'd' is ", type(d))
print("type of 'e' is ", type(e))
print("type of 'f' is ", type(f))
print("type of 'g' is ", type(g))
print()

print("size of 'a' is ", sys.getsizeof(a))
print("size of 'b' is ", sys.getsizeof(b))
print("size of 'c' is ", sys.getsizeof(c))
print("size of 'd' is ", sys.getsizeof(d))
print("size of 'e' is ", sys.getsizeof(e))
print("size of 'f' is ", sys.getsizeof(f))
print("size of 'g' is ", sys.getsizeof(g))
print()

list1 = [
    8,
    2.3,
    [-4, 5],
    ["apple", "banana"],
]  # A list is an ordered collection of data with elements separated by a comma(",")
# and enclosed within square brackets. Lists are mutable i.e. can be modified after creation.
# mutable = changes = modified-able
print(list1)

names = ["uday", "rohan", "sumit", "shivam", "archit", "harry"]
print(names)
print(names[0])
print(names[1])

tuple1 = (
    ("parrot", "sparrow"),
    ("Lion", "Tiger"),
)  # A tuple is an ordered collection of data with elements separated
# by a comma and enclosed within parentheses. Tuples are immutable i.e. cannot be modified after creation.
# non-mutable = no changes = non-modifiable
print(tuple1)

dict1 = {
    "name": "Sakshi",
    "age": 20,
    "canVote": True,
}  # A dictionary is an unordered collection of data containing a
# key:value pair. The key:value pairs are enclosed within curly brackets.
print(dict1)
