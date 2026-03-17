intro = "Hey, I am {} and I am from {}"
name = "Uday"
location = "Gwalior"

# OLD Method of strings filling as Variables
# string.format(___, _____) --> ___ will replace First{} and _____ will replace Second{}
# order matters if no numbering is specified
print(intro.format(name, location))
print(intro.format(location, location))
print(intro.format(location, name))  # we can use Numbering by specifying it
intro1 = "Hey, I am {1} and I am from {0}"
# location is @index 0th so it'll go to 0th no. of string
print(intro1.format(location, name))

# using fstrings
intro2 = f"Hey, I am {name} and I am from {location}"
print(intro2, "<-- this is from fstrings")
print(f"{4*20}", "<-- this arithmetic in string via fstrings")

txt = "For only {price:.2f} dollars!"
print(txt.format(price=59.54666543546))

value = 45.7824235
# value:.3f means it will print value upto 3 decimal points
print(f"Cost of New CDM is {value:.3f}")

# to display literal {} in f-strings, used double {{}}
print(f"This is how u print {{}} in fstrings")
