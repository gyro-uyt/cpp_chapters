# Sets are unordered data items which contain unique elements only and they are mutable but can store only immutable (hashable) items.

s = {2, 3, 45, 6}
print(s)

info = {"Carls", 19, False, 3.55, 1234}
print(info)

# harry = {} # Wrong way to initialise empty set, this would be Dictionary as both share same brackets
harry = set()  # Correct way to initialise empty sets

for value in info:
    print(value)
