# x = int(input("What's x? "))

# # % modulus operation returns the remainder when here x is devided 2
# if x % 2 == 0:
#     print("x is even number")
# else:
#     print("x is odd number")


def main():
    x = int(input("What's x? "))
    if is_even(x):
        print("Even")
    else:
        print("Odd")


def is_even(n):
    return n % 2 == 0
    return True if n % 2 == 0 else False  # Pyhton exclusive
    if n % 2 == 0:
        return True
    else:
        return False


main()
