# for loops can iterate over a sequence of iterable objects in python. Iterating over a sequence is nothing
# but iterating over strings, lists, tuples, sets and dictionaries.
# there are 2 types of loops ---> for and while
name = "Pratham"  # in string iterable object is 'char'
for i in name:
    print(i)  # default end = \n
    if i == "a":
        print("Hello dear")
for m in name:
    print(m, end="~")
print("\n")

colours = [
    "Blue",
    "Yellow",
    "Green",
    "Pink",
    "Whatever",
]  # in lists iterable object is 'items'
for p in colours:  # ---> iterable object = 'items' as this is a list
    print(p)
    for x in p:  # ---> iterable object = 'char' as this is a string in a list
        print(x)
print("\n")

for z in range(21):  # start from 0 to (n-1)
    print(z)
print("\n")

for j in range(10, 20):  # prints from 10 to (20-1)
    print(j)
print("\n")

for k in range(10, 50, 5):
    # print starts from 10 goes upto (50-1) with step difference of '5'
    print(k)
