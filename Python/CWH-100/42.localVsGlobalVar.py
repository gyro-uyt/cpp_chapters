x = 4
print(x)


def hello():
    global x
    x += 1  # now No E: bcz we brought global x
    # x += 1 # E: bcz x is not defined
    x = 5  # changes global x
    x += 1  # changes global x
    print(f"Local x is {x}")
    print("Hello Harry")


print(f"Global x is {x}")
hello()
print(f"Global x is {x}")

# Note: It's generally considered a good practice to avoid modifying global variables from
# within functions, as it can lead to unexpected behavior and make your code harder to debug.
