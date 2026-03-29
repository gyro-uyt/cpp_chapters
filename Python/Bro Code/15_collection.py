# collection = single "variable" used to store multiple value
#
# List = [] ordered and changeable, duplicates ok
# Set = {} unordered and and immutable, but add/remove ok. No duplicates
# Tuple = () ordered and changeable, duplicated okay, Faster
# Dictionary = {}   

## List

fruits = ["apple", "orange", "banana", "coconut"]

fruits[1] = "papaya"

for fruit in fruits:
    print(fruit)

# print(help(fruits))
# print(dir(fruits)) # displays attributes and methods

print(len(fruits))
print("apple" in fruits)
print("pineapple" in fruits)

fruits.append("strawberry")
fruits.remove("banana")
fruits.insert(2, "watermelon")

fruits.sort()  # sorts in alphabetical order
fruits.reverse()  # reverses the list in whatever order it was earlier
# fruits.clear()  # clears all elements of list

print(fruits.index("papaya"))
print(fruits.count("apple"))

print(fruits)

## Sets
# cannot change elements but you can add/remove elements

fruits = {"apple", "orange", "banana", "apple", "coconut"}

# print(help(fruits))
# print(dir(fruits))

print(len(fruits))
print("apple" in fruits)
print("pineapple" in fruits)

# print(fruits[0]) # E: bcz sets are unordered
fruits.add("strawberry")
fruits.remove("banana")
fruits.pop()  # removes last element
# fruits.clear()

print(fruits)

## Tuples

fruits = ("apple", "orange", "banana", "apple", "coconut")

# print(help(fruits))
# print(dir(fruits))

print(len(fruits))
print("apple" in fruits)
print("pineapple" in fruits)

print(fruits.index("orange"))
print(fruits.count("apple"))

print(fruits)
