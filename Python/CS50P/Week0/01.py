print("Hellow, World")

a = 13
print(a)

# name = input("Enter, your name: ")
name = "harry"
print(name)
print("hello," + name)  # '+' operator for concatination
print("hello,", name)  # ',' for multiple arguements

# print(*values: object, sep=" ", end="\n") ---> this is the default print statement
print(
    "Granny says you,", "Hello"
)  # so by default the parameters are separated by a black space and ended with a newline character
print("Granny says you,", "Hello", sep="_", end="!!!")
print()

print('"hey"')  # '\' is used for corner case

# parameters vs arguements

# Comments
"""
mutli-line comments
"""

value = 69
print("Value of number is {value}")  # this just prints as it is
print(
    f"Value of number is {value}"
)  # writing 'f' at starting makes this a 'fstring', meaning format string, so it fills the value of variable in {}

print("\n{value}")
print({value})
print(f"{value}")
print(value)
# print(f"{unkwn}") ---> gives errors as unkwn is not defined variable
