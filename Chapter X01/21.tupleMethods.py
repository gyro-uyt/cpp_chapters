# Manipulating Tuples
# Tuples are immutable, hence if you want to add, remove or change tuple items, then first you must convert the tuple to a list.
# Then perform operation on that list and convert it back to tuple.

countries = ("Spain", "Italy", "India", "England", "Germany")
temp = list(countries)
temp.append("Russia")       #add item 
temp.pop(3)                 #remove item
temp[2] = "Finland"         #change item
countries = tuple(temp)
print(countries)

# Thus, we convert the tuple to a list, manipulate items of the list using list methods, then convert list back to a tuple.
# However, we can directly Concatenate two tuples without converting them to list.

lst3 = (0, 1, 2, 3, 2, 31, 1, 3, 2, 3)
res = lst3.count(3)
res = lst3.index(3)
# res = lst3.index(311)
res = lst3.index(3, 4, 8)   # find index of '3' from '4' to '(8-1)'
res = len(lst3)
print('Count of 3 in lst3 is:', res)
