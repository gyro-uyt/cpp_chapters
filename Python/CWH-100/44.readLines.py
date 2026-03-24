## Readlines

# f = open("myfile.txt", "r")
# while True:
#     line = f.readline()
#     print(line)
#     if not line:
#         print(line, type(line))
#         break

f = open("myfile.txt", "r")
i = 0
while True:
    i = i + 1
    line = f.readline()
    if not line:
        break
    print(line)
    m1 = int(line.split(",")[0])
    m2 = int(line.split(",")[1])
    m3 = int(line.split(",")[2])
    print(f"Marks of student {i} in Maths is: {m1}")
    print(f"Marks of student {i} in Maths is: {m2}")
    print(f"Marks of student {i} in Maths is: {m3}")

## Writelines

f = open("myfile2.txt", "w")
lines = ["line 1\n", "line 2\n", "line 3\n"]
f.writelines(lines)
f.close()

# Note: You need to new line char manually not supplied with function
