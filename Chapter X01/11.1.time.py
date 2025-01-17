import time # built-in module --> necessary to import
cwqtt = time.strftime('%H:%M:%S')
print(cwqtt)
# hour = time.strftime('%H')
hour = int(time.strftime('%H'))     # time.strftime() gives result in String
# print(hour)

# # wqtt = int(input("What hour of day is it mister: "))
# wqtt = int(hour)   # ---> here, int() is necessary as time.strftime() gives result in String
# # print(wqtt)

if (0 <= hour < 12):
    print("Good Morning sir")
elif (12 <= hour < 17):
    print("Good Afternoon sir")
elif (17 <= hour < 24):
    print("Good Evening sir")

