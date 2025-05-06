# Ask user for their name
# name = input("Tell us your name, ")

# Removes whitespaces from right and left of the string
# name = name.strip()

# Capitilize first Word of string
# name = name.capitalize()

# Capitilize first letter of every word in string
# name = name.title()

# Combining functions
# name = name.strip().title()

# Best method
name = input("Who are you? ").strip().title()

# Splits the given string from the specified value
first, second = name.split(" ")  # splits from whatever in inside ""

# Say hello to user
print("hello,", name, end="!\n")

print(first)
print(second)
