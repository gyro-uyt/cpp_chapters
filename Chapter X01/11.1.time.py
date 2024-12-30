import time # built-in module --> necessary to import
cwqtt = time.strftime('%H:%M:%S')
print(cwqtt)
ghnta = time.strftime('%H')
# print(ghnta)

# wqtt = int(input("What hour of day is it mister: "))
wqtt = int(ghnta)   # ---> here, int() is necessary as time.strftime() gives result in String
# print(wqtt)

if (0 <= wqtt < 12):
    print("Good Morning sir")
elif (12 <= wqtt < 17):
    print("Good Evening sir")
elif (17 <= wqtt < 24):
    print("Good Evening sir")

