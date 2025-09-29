# Python Tuples
#   >they are made from ()
#   >they cannot be changed like lists, hence append(), extend(), like operations on it are non-valid
#   >they remains fixed i.e. are immutable

# >Tuples are ordered collection of data items. They store multiple items in a single variable.
# >Tuple items are separated by commas and enclosed within round brackets ().
# >Tuples are unchangeable meaning we can not alter them after creation.

# >all the features of lists are applicable here, except for one which modifies the tuple

lst1 = (1, 2, 76, 342, 32, "green", True)
# lst1[0] = 90   >throws error as tuple can't be modified once defined
print(type(lst1), "\n", lst1)
print(len(lst1))

print(lst1[0])
print(lst1[-1])
print(lst1[2])
# print(lst1[34])

if 3421 in lst1:
    print("Yes 3421 is present in this tuple")
else:
    print("Not prenset")

lst2 = lst1[1:4]
print(lst2)
print()
