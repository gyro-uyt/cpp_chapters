# collection = single "variable" used to store multiple value
#
# List = [] ordered and changeable, duplicates ok
# Set = {} unordered and and immutable, but add/remove ok. No duplicates
# Tuple = () ordered and changeable, duplicated okay, Faster
# Dictionary = a collection of {key:value} pairs, ordered and changeable, No duplicates

## List
print("\n", "List".center(40, "-"))

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
print("\n", "Sets".center(40, "-"))

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
print("\n", "Tuple".center(40, "-"))

fruits = ("apple", "orange", "banana", "apple", "coconut")

# print(help(fruits))
# print(dir(fruits))

print(len(fruits))
print("apple" in fruits)
print("pineapple" in fruits)

print(fruits.index("orange"))
print(fruits.count("apple"))

print(fruits)

## Dictionary
print("\n", "Dictionary".center(40, "-"))

capitals = {
    "USA": "Washington D.C.",
    "India": "New Delhi",
    "China": "Beijing",
    "Russia": "Moscow",
}

# print(dir(capitals))
# print(help(capitals))

print(capitals.get("India"))
print(capitals.get("Japan"))
print("Capital Exists" if capitals.get("Russia") else "Capital doesn't exists")

# capitals.update({"Germany": "Berlin"}) # add this pair in dictionary if it already doesn't exists
# capitals.update({"USA": "NYC"}) # Key already exists, So it updates the Key with new Value
# capitals.pop("China") # removes the pair whose key is "China"
# capitals.popitem() # removes the last added pair
# capitals.clear() # empties the dictionary

# keys = capitals.keys() # returns an object which resembles as list
# for key in capitals.keys():
#     print(key)

# values = capitals.values() # returns an object which resembles as list
# for value in values:
#     print(value)

items = capitals.items()
for key, value in capitals.items():
    print(f"{key}: {value}")

# print(keys)
# print(values)
# print(items)
# print(capitals)
 