# there are 2 types of functions:
# 1) built-in functions ---> min(), max(), len(), sum(), type(), range(), dict(), list(), tuple(), set(), print(), etc.
# 2) user-defined functions ---> We can create functions to perform specific tasks as per our needs

def harmean(a, b):
    hmean = (2*(a*b))/(a+b)
    print("Harmonic mean of", a, "&", b, "is", hmean)


def isGreater(a, b):
    if (a > b):
        print("First number is greater")
    else:
        print("Second number is greater or equal")

# use of "pass" ---> declaration of the function


def isLesser(a, b):
    pass  # writting means we can define this function later


a = 9
b = 8
harmean(a, b)
isGreater(a, b)

c = 8
d = 74
harmean(c, d)
isGreater(c, d)
