# Note: python 3.7 onwards dictionary are ordered earlier they used to be unordered
# Note: Dictionary and sets share same brackets but are differed by their item syntax and by default {} would be a dictionary

# A dictionary is an ordered, mutable collection of unique, hashable key-value pairs with O(1) average-time complexity for lookups, insertions, and deletions.

dic = {"Name": "Jai Singh", "Age": 24, 423: "Zakir", 654: "Neha", 345: "Tushar"}

print(dic)

# Accessing elements

# print(dic["Name2"]) # this will raise KeyError, if key not found
print(dic.get("Name2"))  # this will return None, if key not found

# keys()
print(dic.keys())
for key in dic.keys():
    print(key)

# values()
print(dic.values())
for value in dic.values():
    print(value)

# example:
for key in dic.keys():
    print(f"The value corresponding to the key `{key}` is `{dic[key]}`")

# items()
print(dic.items())
for key, value in dic.items():
    print(f"'{key}', '{value}'")
