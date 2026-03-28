# input() os a function that prompts the user to enter data, it returns the entered data as string

name = input("What is your name?: ")
age = int(input("How old are you?: "))

age = age + 1

print(f"Hello, {name}!, you are {age} years old")

# Exercise: Calculate area of Rectangle

length = float(input("Enter the length: "))
breadth = float(input("Enter the breadth: "))
area = length * breadth

print(f"The area is: {area} units²")
