# Python docstrings are string literals that appear right after the definations of a functions, method, class, or module.


# Note: docstrings must be right after function name
def square(n):
    """Take in a number n, returns the square of n"""
    return n**2


print(square(6))

# Prints the docstring
print(square.__doc__)
