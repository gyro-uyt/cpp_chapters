x = int(input("What's x? "))
y = int(input("What's y? "))

if x < y:  # paranthesis are optional here for condition
    print("x is less than y")  # indentation is very important
elif x > y:
    print("x is greater than y")
else:
    print("x is equal to y")


# OR keyword
if x < y or x > y:
    print("x is not equal to y")
else:
    print("x is equal to y")


# NOT keyword
if x != y:
    print("x is not equal to y")
else:
    print("x is equal to y")
