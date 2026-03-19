# Set Methods

s1 = {1, 2, 5, 6}
s2 = {3, 6, 7}
print(s1, s2)

## 1. Union: S1​∪S2 ​= All elements in S1​ or S2S​ (or both).
print(s1.union(s2))
# s1.update(s2)

## 2. Intersection: S1​∩S2 ​= Only elements in both S1​ and S2.
print(s1.intersection(s2))
# s1.intersection_update(s2)

## 3. Symmetric Difference: S1​△S2​=(S1​∪S2​)−(S1​∩S2​) OR S1​△S2​=(S1​−S2​)∪(S2​−S1​)
print(s1.symmetric_difference(s2))
# s1.symmetric_difference_update(s2)

## 4. Difference: S1​∖S2​ = S1−S2 (Elements in S1​ but NOT in S2)
print(s1.difference(s2))
# s1.difference_update(s2)

# Note: Methods like `update()` modify the original set in-place, while
# operators/functions like `union()` or `|` return a new set, leaving originals unchanged.

# Disjoints sets: They have no elements in common (S1​∩S2 ​= ∅).
print(s1.isdisjoint(s2))

# Superset: S1​⊆S2​ means every element of S1​ is also in S2
print(s1.issuperset(s2))

# Subset: S1​⊇S2​ means every element of S2 is also in S1
print(s1.issubset(s2))

s1.add(3)  # to single item into set
print(s1)

# To add more than one item into set, simply create another set or any other iterable object(list, tuple, dictionary), and use the update() method to add it into the existing set
u1 = {8, 9}
s1.update(u1)
s1.update({12, 14, 15})
s1.update([23, 2, 45])
print(s1)

# remove() or discard() can be used to delete items from the set
# Main diff btw them is, when we try to delete an item which is not present in set, then remove() raises an ERROR, whereas discard() DOESN'T

# s1.remove(100) # this will stop the execution of code
s1.discard(100)  # this ignores the error

# s1.remove(12,13,14) # both remove() and discard() takes only one item only

# pop() removes the last item of the set But we don't know which item will get popped as sets are unordered, however you can access the popped item if you assign the pop() method to a variable
print(s1.pop())

# del is not a method, rather it is a keyword which deletes the set entirely
del u1
# print(u1) # Will throw NameError

# clear() clears all items in the set instead of deleting the set
s1.clear()
print(s1)

# check if an item is present in set
if 6 in s2:
    print("6 is present in s2")
else:
    print("6 is not present in s2")
