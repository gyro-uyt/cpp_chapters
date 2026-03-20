# Custom Errors
# a = int(input("Enter any value between 5 and 9: "))

# if a < 5 or a > 9:
#     raise ValueError("Value should be between 5 and 9")

# check python built-in exceptions @https://docs.python.org/3/library/exceptions.html

# Custom Exceptions by creating a new class that is derived from the built-in Exception class
# # Syntax
# class CustomError(Exception):
#     # code ...
#     pass
# try:
#     # code ...
# except CustomError:
#     # code ...

# Quiz: in above program if user inputs "quit" then No error should come else there should be error

b = input("Enter any value between 5 and 9: ")

if b == "quit":
    print("Quitting ...")
else:
    try:
        if int(b) < 5 or int(b) > 9:
            raise ValueError("Input should be between 5 and 9")
    finally:
        print(b)
