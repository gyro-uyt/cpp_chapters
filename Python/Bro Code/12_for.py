# for loops = execute a block of code a fixed number of times.
# you can iterate over a range, string, sequence, etc.

for x in range(1, 21):
    if x == 13:
        continue
    elif x == 15:
        break
    else:
        print(x)
