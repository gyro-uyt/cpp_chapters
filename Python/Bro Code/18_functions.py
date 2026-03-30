# function = a block of reusable code
#     place () after name of function to invoke the function

# return = statement used to end a function
#     and send a result back to the caller

# Types of Arguments:  1. positional, 2. default, 3. keyword, 4. arbitrary

## 1. Positional Arguments

# Definition: Arguments passed in the order of the function’s parameters, which we usually do.
# Key Point: Order matters! Wrong order → wrong assignment.


def greet(name, age):
    print(f"{name} is {age} years old.")


greet("Alice", 25)  # "Alice" → `name`, 25 → `age`

## 2. Default Arguments

# Definition: Parameters with predefined values if no argument is provided.
# Key Point: Must be defined after positional arguments.


def greet(name, age=30):  # `age` has a default value
    print(f"{name} is {age} years old.")


greet("Bob")  # Output: "Bob is 30 years old."

# Note: Default arguments must be declared after non-default arguments in a function definition to allow optional parameter omission

## 3. Keyword Arguments

# Definition: Arguments passed with explicit parameter names (order doesn’t matter).
# Key Point: Overrides positional/default arguments.

greet(age=25, name="Alice")  # Same as positional, but order flexible


def hello(greeting, title, first, last):
    print(f"{greeting} {title}{first} {last}")


hello("Hello", first="James", last="John", title="Mr.")


# here, sep, end are keyword arguments found in print function
print("Hello", "How", "Bye", sep="-", end="?")
print()

# Note: Positional arguments must precede keyword arguments in a function call

## Arbitrary Arguments (*args & **kwargs)

# Definition: Allows passing a variable number of arguments.
#     *args: Collects extra positional arguments as a tuple.
#     **kwargs: Collects extra keyword arguments as a dictionary.
# Key Point: Used for flexible function definitions.

# args meaning arguments and kw for keyword, * is unpacking operator


def example(*args, **kwargs):
    print("Args:", args)  # (1, 2, 3)
    print("Kwargs:", kwargs)  # {"a": 4, "b": 5}


example(1, 2, 3, a=4, b=5)


def add(*nums):  # args is just a variable name
    print(type(nums))  # nums would be a tuple containing all arguments passed on
    total = 0
    for num in nums:
        total += num
    return total


print(add(1, 2, 3, 4, 5, 6, 7, 8, 9))


def print_address(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")


print_address(street="123 Fake St.", City="Detroit", State="MI", Zip="5423")
print_address(a="one", b="two", c="three", d="four", e="five")
