## Basics

friends = 0

# Addition
friends = friends + 1
friends += 1  # Augmented assignment operator

# Subtraction
friends = friends - 3
friends -= 3  # Same as above

# Multiplication
friends = friends * 5
friends *= 5

# Division
friends = friends / 20
friends /= 20

# Exponential
friends = friends**2
friends **= 2

# Remainder
friends = friends % 3
friends %= 3

print(friends)

## Built-in functions

x = 3.14
y = -5
z = 8
w = 2

result = round(x)
result = abs(y)
result = pow(z, w)
result = max(x, y, z, w)
result = min(x, y, z, w)

print(result)

# Math library

import math

print(math.pi)
print(math.e)
print(math.sqrt(65))
print(math.ceil(9.2))  # <-- always rounds up
print(math.floor(0.9))  # <-- always rounds down
