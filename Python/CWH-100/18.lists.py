# Python Lists
#   >Lists are ordered collection of data items.
#   >They store multiple items in a single variable.
#   >List items are separated by commas and enclosed within square brackets [].
#   >Lists are changeable meaning we can alter them after creation.
#   >a single list can contain items of Different data types

# Lists can be CHANGED i.e. they are Muttable
# Lists are made by []

lst1 = [3, 64, 98, "Crew", True]
print("Length of list:", len(lst1))
print(lst1)
print()

# Each item/element in a list has its own unique index. This index can be used to access any particular item from the list.
# The first item has index [0], second item has index [1], third item has index [2] and so on.
print(lst1[0])
print(lst1[1])
print(lst1[2])
print(lst1[3])
print(lst1[4])
print()

print(lst1[-3])  # negative indicing
print(lst1[len(lst1) - 3])
print(lst1[5 - 3])
print(lst1[2])
print()

# if-else on list:
if "Crew" in lst1:
    print("Crew is present in lst1")
else:
    print("Crew ain't there")

if 69 in lst1:
    print("Present")
else:
    print("Absent")

if "3" in lst1:  # gives absent bcz. here "3" is 'string' and in lst1 it is 'int'
    print("Present")
else:
    print("Absent")

# same-things applies for strings tooo
if "rat" in "Pratham":
    print("Present")
else:
    print("Absent")
print()

# def check(content):
#     if content in lst1:
#         print(content, "is present in lst1")
#     else:
#         print(content, "ain't there")
# check(Crew)

# Range of index:   --> listName[start : end : jumpIndex]
# You can print a range of list items by specifying where you want to start, where do you want to end and
# if you want to skip elements in between the range.
print(lst1[:])
print(lst1[:3])
print(lst1[2:])
print(lst1[1:4])
print(lst1[1:5:2])  # 2 becomes step-size
print()

# List Comprehension:   --> List = [Expression(item) for item in iterable if Condition]
# List comprehensions are used for creating new lists from other iterables like lists, tuples, dictionaries, sets,
# and even in arrays and strings.

lst = [i for i in range(4)]
print(lst)

lst2 = [i * i for i in range(10)]
print(lst2)
lst2 = [i * i for i in range(10) if i % 2 == 0]
print(lst2)

# Example 1: Accepts items with the small letter “o” in the new list
names = ["Milo", "Sarah", "Bruno", "Anastasia", "Rosa"]
namesWith_O = [item for item in names if "o" in item]
print(namesWith_O)
