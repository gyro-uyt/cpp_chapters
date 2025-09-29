for i in range(12):  # 0 --> (12-1)
    if i == 10:
        print("Continue, Skips the iteration")
        continue  # continue statement skips the Current iteration and causes the next iteration to occur
    print("5 X", i, "=", 5 * i)
print()

i = 0
while True:
    print(i)
    i = i + 1
    if i % 100 == 0:
        break  # break statement terminates the very loop it lies within
