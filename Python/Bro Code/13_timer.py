import time

my_time = int(input("Enter the countdown time: "))

print("Your, timer starts now")
for x in range(my_time, 0, -1):
    seconds = x % 60  # bcz sec can't be greater than 60
    minutes = int(x / 60) % 60
    hours = int(x / 3600)
    print(f"\n{hours:02}:{minutes:02}:{seconds:02}")
    print(f"{x}s left")
    time.sleep(1)

print("Time's Up")
