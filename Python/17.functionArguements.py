# There are four types of arguments that we can provide in a function:
#   1) Required Arguments
#   2) Default Arguments
#   3) Variable length Arguments
#   4) Keyword Arguments

# 1) Required arguments:
#    In case we don’t pass the arguments with a key = value syntax, then it is necessary to pass the arguments in the
#    correct positional order and the number of arguments passed should match with actual function definition.

def avg1(a, b):  # ---> 'a' and 'b' are Required Arguements
    x = (a+b)/2
    print(x)


avg1(3, 7)
print()

# def name(fname, mname, lname):
#     print("Hello,", fname, mname, lname)
# name("Pratham", "Shah")
# ---> throws error as lname was not passed

#  2) Default arguments:
#     We can provide a default value while creating a function. This way the function assumes a default value even
#     if a value is not provided in the function call for that argument


def avg2(a=2, b=6):  # ---> defualt arguements
    x = (a+b)/2
    print(x)


avg2()          # uses default values of 'a' and 'b'
avg2(5)         # value of 'a' is Changed and default value of 'b' is used
avg2(5, 15)     # a=5 and b=15, both default values changed
avg2(a=5)       # a=5 and defualt value of 'b' is used as it's unchanged
avg2(b=15)      # b=15 and defualt value of 'a' is used as it's unchanged
# avg2(x=9)     # use only arguements which are defined
avg2(b=15, a=5)  # order doesn't matters as long as variables are Correctly defined
print()

# 3) Variable length Arguments:
#    Sometimes we may need to pass more arguments than those defined in the actual function.
#    This can be done using variable-length arguments.


def avg3(*num):  # *num is a tuple
    # print(type(num))
    sum = 0
    for i in num:
        sum = sum + i
    print(sum / len(num))







avg3(4, 5, 6, 8, 33)    # variable lenght arguement
avg3(9, 99, 34, 66, 24, 58, 69)
print()

# 4) Keyword Arguments:
#    While creating a function, pass a * before the parameter name while defining the function.
#    The function accesses the arguments by processing them in the form of dictionary


def namee(**name):
    # print(type(name)) ---> dictionary
    print(name["fname"], name["mname"], name["lname"])

# name()
namee(mname="Shah", lname="Soni", fname="Pratham")
namee(fname="Uday", lname="Thakur", mname="Singh")
print()

# return Statement:
# The return statement is used to return the value of the expression back to the calling function.


def add(*numb):  # numb is a list
    sum = 0
    for i in numb:
        sum = sum + i
    # print(sum)
    return sum  # return is more efficient for handling


c = add(85, 59, 45, 24, 61)
print(c)
