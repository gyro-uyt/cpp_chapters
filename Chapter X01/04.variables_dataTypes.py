# EVERYTHING in Python is OBJECT variable data string all,,

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

list1 = [
    8,
    2.3,
    [-4, 5],
    ["apple", "banana"],
]  # A list is an ordered collection of data with elements separated by a
print(
    list1
    # comma and enclosed within square brackets. Lists are mutable and can be modified after creation.
)
# mutable = changes = modified-able

tuple1 = (
    ("parrot", "sparrow"),
    ("Lion", "Tiger"),
)  # A tuple is an ordered collection of data with elements separated
print(
    tuple1
    # by a comma and enclosed within parentheses. Tuples are immutable and can not be modified after creation.
)
# non-mutable = no changes = non-modifiable

dict1 = {
    "name": "Sakshi",
    "age": 20,
    "canVote": True,
}  # A dictionary is an unordered collection of data containing a
# key:value pair. The key:value pairs are enclosed within curly brackets.
print(dict1)

dict1 = {
    "name": "Sakshi",
    "age": 20,
    "canVote": True,
}  # key:value, it is map data, maps one to another
print(dict1)
