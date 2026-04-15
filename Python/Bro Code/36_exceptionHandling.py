# exception = An event that interrupts the flow of a program
#             (ZeroDivisionError, TypeError, ValueError)
#             1.try, 2.except, 3.finally


try:
    number = int(input("Enter a number: "))
    print(1 / number)

except ZeroDivisionError:
    print("You can't divide by zero IDIOT!")

# chaining of exceptions can be done just like if's
except ValueError:  
    print("Enter only numbers please!")

# this is like default case, for all exceptions, not recommended bcz it doesn't gives the exception reason
except Exception:
    print("Something went wrong!")

# executes regardless of try/except code block
finally:
    print("Do some cleanup here")
