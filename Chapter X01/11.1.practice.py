time = int(input("What hour of day is it mister: "))

if (0 <= time < 12):
    print("Good Morning sir")
elif (12 <= time < 17):
    print("Good Evening sir")
elif (17 <= time < 23):
    print("Good Evening sir")
else:
    print("Enter the hour in 24-hours format in integral value !")
