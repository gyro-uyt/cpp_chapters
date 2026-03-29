# name = input("Enter your full name: ")
name = "uday Thakur"
phone_number = "934-354-7425"

print(len(name))
print(name.find("d"))  # return first occurrence of given char
print(name.rfind("d"))  # return last occurrence of given char
print(name.capitalize())
print(name.upper())
print(name.lower())
print(name.isdigit())  # True if string contains only digits
# True if string contains only alphabetical characters (empty space or new line char are not included)
print(name.isalpha())
print(phone_number.count("-"))
print(phone_number.replace("-", "."))
print(phone_number.replace("-", ""))  # reduced '-' completely

print(help(str))
