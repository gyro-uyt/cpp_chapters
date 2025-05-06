# In python, we can take user input directly by using input() function
# input function gives a return value as STRING/Character hence we have to pass that into a variable
print("hello enter the input: ")
a = input()  # ---> everthing that goes into Input is as String
print(a)
b = input()
print(b)

# this Won't sum as 'a' and 'b' are strings, it Concatenates
print("sum is:", a + b)
print(
    "real sum is:", int(a) + int(b)
)  # use typecasting to correctly do the desired operation

# input with messages
x1 = int(input("Enter the value of x1: "))  # ---> this also a method of type-casting
x2 = int(input("Enter the value of x2: "))
print("summation of x1 & x2 is", x1 + x2)
