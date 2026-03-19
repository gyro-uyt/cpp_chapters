try:
    a = int(input("Enter the number: "))
    print(f"Multiplication table of {a} is:")
    for i in range(1, 11):
        print(f"{a} X {i} = {a*i}")
# except Exception as e: # both below and this can be used
except:
    # print(e)
    print(f"Invalid Input!")

print("Some imp lines of code here")
print("End of program")

try:
    num = int(input("Enter an integer: "))
    a = [7, 8]
    print(a[num])
except ValueError:
    print("Number entered is not an integer")
except IndexError:
    print("Index error")

# Multiple exceptions can be made for different type of errors
