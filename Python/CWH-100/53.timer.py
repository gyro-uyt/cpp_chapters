import time

my_time = int(input("Enter the countdown time: "))

print("Your, timer starts now")
for x in range(my_time, 0, -1):
    print(f"{x}s left")
    time.sleep(1)

print("Time's Up")
