# Decorator = A function that extends the behavior of another function
#             w/o modifying the base function
#             Pass the base function as an argument to the decorator


# decorator function-1
def add_sprinkles(func):
    def wrapper(*args, **kwargs):
        print("* You added sprinkles *")
        func(*args, **kwargs)

    return wrapper


# decorator function-2
def add_fudge(func):
    def wrapper(*args, **kwargs):
        print("* You added fudge *")
        func(*args, **kwargs)

    return wrapper


# using multiple decorators
@add_sprinkles
@add_fudge
def get_ice_cream(flavor):
    print(f"Here is your {flavor} ice cream")


get_ice_cream("Vanilla")
