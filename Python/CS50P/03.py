x = float(input("What's x? "))
y = float(input("What's y? "))

# input() returns a String Always

z = round(x + y)
z = x / y

# print("Result is", int(x) + int(y))
# print("Result is", int(x + y))    ---> this just reomves all the decimal values, hence Inefficient
# print("Result is", round(x + y))

print(f"{z}")
print(f"{z:,}")  # ---> gives commas after 3 digits
print(f"{z:.2f}")  # ---> print upto 2 decimal only

# print(int(input("What's x? "))+int(input("What's y? ")))  ---> this is also possible
