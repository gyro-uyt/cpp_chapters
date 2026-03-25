# Functions can also be passed as arguments to a function, now for simpler/one-liner function
# you can anonymniosly pass the function defining in argument itself without name by using lambda functions


def apply(fx, value):
    return 6 + fx(value)


def double(x):
    return x * 2


print(apply(double, 2))

# Or you can do simply, without needing to define double and then pass it on
print(apply(lambda x: x * 2, 2))

# You can also store lambda functions in variables
cube = lambda x: x * x * x
avg = lambda x, y: (x + y) / 2

print(cube(3))
print(avg(3, 6))
