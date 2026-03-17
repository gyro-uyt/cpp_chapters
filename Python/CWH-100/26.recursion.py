# Recursion is the process of defining something in terms of itself


def factorial(n):
    if n == 0 or n == 1:
        return n
    else:
        return n * factorial(n - 1)


print(factorial(5))


def fibNum(n):
    if n == 0 or n == 1:
        return n
    else:
        return fibNum(n - 1) + fibNum(n - 2)


print(fibNum(6))
