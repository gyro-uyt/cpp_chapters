# map(function, iterable)
# filter(function, iterable)
# reduce(function, iterable)

# Map

# def cube(x):
#     return x * x * x

l = [1, 2, 4, 6, 8, 10]

# new_l = []
# for item in l:
#     new_l.append(cube(item))

# work done above can be done like this
new_l = list(map(lambda x: x**3, l))

print(l)
print(new_l)


# Filter
def filter_fn(a):
    return a > 4  # returns True/ False


new_new_l = list(filter(filter_fn, l))
print(new_new_l)

# A function that takes function as arguments are known as higher order function.
# So, Map/ Filter/ Reduce all are higher order function
# Note: Map/ Filter/ Reduce function return their respective objects which can then be further converted to list, tuple, etc.

# Reduce

from functools import reduce

# List of numbers
numbers = [1, 2, 3, 4, 5]


# Calculate the sum of the numbers using the reduce function
def my_sum(x, y):
    return x + y


sum = reduce(my_sum, numbers)
# this is how it calculated 15
[1, 2, 3, 4, 5]
[1+2, 3, 4, 5]
[3, 3, 4, 5]
[3+3, 4, 5]
[6, 4, 5]
[6+4, 5]
[10, 5]
[10+5]
[15]

# reduce function applies the function to the first two elements in the iterable and then applies the function
# to the result and the next element and so on.

print(sum)
