def greet(fx):
    def mfx():
        print("Hi, this is from greet decorator")
        fx()
        print("this should modify any function")

    return mfx


# m-1 of using greet
def hello():
    print("Hello, World")


greet(hello)()  # <-- either this


# m-2 (better way) of using greet
@greet  # <-- or simply this
def hello1():
    print("Hello, world1")


hello1()


# decorator with arguments
def greet1(fx):
    def mfx(*args, **kwargs):
        print("Good, morning")
        fx(*args, **kwargs)
        print("Bye, bye")

    return mfx


# m-1
def add(a, b):
    print(a + b)


# greet(add)(3,6)
greet1(add)(3, 6)


# m-2
@greet1
def add1(a, b):
    print(a + b)


add1(6, 2)

# example of decorators - logging, memoization, access control, and more
import logging


def log_function_call(func):
    def decorated(*args, **kwargs):
        logging.info(f"Calling {func.__name__} with args={args}, kwargs={kwargs}")
        result = func(*args, **kwargs)
        logging.info(f"{func.__name__} returned {result}")
        return result

    return decorated


@log_function_call
def my_function(a, b):
    print(a + b)


my_function(5, 6)
