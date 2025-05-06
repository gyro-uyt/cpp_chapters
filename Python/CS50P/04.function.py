# def --> define
# def hello():
#     print("hello, ")

# hello()

# name = input("Your name is ")


def hello(to="world"):
    print(f"hello, {to}")


hello()
# hello(name)

# here the problem is we have to define the function before calling them,

# Solution --> use main(), in this define call anywhere and just call the main function at the end


def main():
    name = input("What's the name? ")
    hello1(name)


def hello1(to="world"):
    print("hello,", to)


main()
