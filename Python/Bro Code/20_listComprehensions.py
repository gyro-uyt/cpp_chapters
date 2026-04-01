# List comprehension = A concise way to create lists in Python
#                      Compact and easier to read than traditional loop
#                      [expression for value in iterable if condition]

# traditional loop
doubles = []
for x in range(1, 11):
    doubles.append(x * 2)

# comprehension method
# doubles = [expression for value in iterable]
doubles = [x * 2 for x in range(1, 11)]
triples = [y * 3 for y in range(1, 11)]
squares = [z * z for z in range(1, 11)]

print(doubles)
print(triples)
print(squares)

fruits = ["apple", "orange", "banana", "coconut"]
fruits = [fruit.upper() for fruit in fruits]
print(fruits)

numbers = [1, 4, 0, 6, -2, 3, -4, -7, -34, 45]
positive_numbers = [num for num in numbers if num >= 0]
negative_numbers = [num for num in numbers if num < 0]

print(positive_numbers)
print(negative_numbers)
