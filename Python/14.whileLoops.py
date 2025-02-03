i = 5
while (i <= 10):
    print(i)
    i = i+1
print()

count = 5
while(count>=0):
    print(count)
    count=count-1
# else with while loop
else:   # executes when the while loop becomes false
    print("This is from else:")
print()

# emulate do while loop in python
while True: # use an infinite while loop with a break statement wrapped in an if statement that checks a given condition and 
  number = int(input("Enter a positive number: "))  # breaks the iteration if that condition becomes true
  print(number)
  if not number > 0:
    break
