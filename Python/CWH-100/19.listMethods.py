lst1 = [3, 7, 65, 8, 86, 69, 234, 76, 45, 9, 77, 36]
print(lst1)
print(len(lst1))
print()

# append(): adds an item at the end of the list
lst1.append(69)
print(lst1)
print()

# sort(): sorts the list in ascending order
lst1.sort()
print(lst1)
print()

# reverse(): sorts the list in descending order
lst1.sort(reverse=True)  # m-1
print(lst1)
lst1.reverse()  # m-2, both works the same
print(lst1)  # --> revered 2 times, hence normal now
print()

# index(): This method returns the index of the first occurrence of the list item.
print(lst1.index(7))
print()

# count(): Returns the count of the number of items with the given value.
print(lst1.count(69))
print()

# copy(): Returns copy of the list. This can be done to perform operations on the list without modifying the original list.
lst2 = lst1.copy()
lst2[1] = 69  # affects only lst2
print(lst1)
print(lst2)
print()

# insert(): This method inserts an item at the given index. User has to specify index and the item to be inserted within the insert() method
lst1.insert(1, "green")  # inserts item at index[1]
lst1.insert(5, 45)  # inserts 45 at index[5]
print(lst1)
print()

# extend(): This method adds an entire list or any other collection datatype (set, tuple, dictionary) to the existing list.
lst3 = [23, 45, 67]
lst4 = ["green", "yellow", "orange"]
print(lst3)
print(lst4)
lst3.extend(lst4)
print(lst3)
print(lst4)
print()

# Concatenating two lists: You can simply concatenate two lists to join two lists.
lst5 = ["voilet", "indigo", "blue", "green"]
lst6 = ["yellow", "orange", "red"]
lst7 = lst5 + lst6  # afftects neither of the list
print(lst5 + lst6)
print(lst7)
