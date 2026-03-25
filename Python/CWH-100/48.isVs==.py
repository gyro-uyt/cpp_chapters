a = [1, 4, 7]
b = [1, 4, 7]

print(a is b)  # False
print(a == b)  # True

# 'is' checks exact location of object in memory
# '==' checks value

x = 3
y = 3

print(x is y)  # True
print(x == y)  # True

# When immutable objects comes python allocates same location to different variables if they request same values, bcz immutable objects won't change hence python gives same space to different variables
# For mutable objects python will create different memory spaces bcz things may change
