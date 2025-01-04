# Manipulating Tuples
# Tuples are immutable, hence if you want to add, remove or change tuple items, then first you must convert the tuple to a list.
# Then perform operation on that list and convert it back to tuple.

lst3 = (0, 1, 2, 3, 2, 31, 1, 3, 2, 3)
res = lst3.count(3)
res = lst3.index(3)
# res = lst3.index(311)
res = lst3.index(3, 4, 8)
res = len(lst3)
print('Count of 3 in lst3 is:', res)
