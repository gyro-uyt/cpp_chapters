marks = [23, 45, 21, 45, 34, 16, 64, 56, 73, 41]

# traditional way
index = 0
for mark in marks:
    print(mark)
    if index == 3:
        print("Awesome")
    index += 1

# enumerate way
# enumerate() yields a tuple containing the index and value of the current item in the list.
# We unpack this tuple into index and value variables.
for unit in enumerate(marks):
    print(unit)

# for index, mark in enumerate(marks, start=1): # start can be used to specify where the index starts from
for index, mark in enumerate(marks):
    print(mark)
    if index == 3:
        print("Awesome")
