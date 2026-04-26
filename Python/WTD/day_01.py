# class basics:
#     def doing(self, num1: int, num2: int) -> int:
#         return num1 + num2


# hello = basics()

# # print(hello.doing(3, 4))

# print("hello")
# sum = 0
# rSum = []
# print(sum)
# print(rSum)
# rSum.append(1)
# rSum.append(2)
# rSum.append(3)
# rSum.append([4, 5, 6])
# rSum.append("7")
# rSum.append("8,9,0")
# print(rSum)

# rSum.clear()
# print(rSum)

# rSum = [1, 2, 3, 4, 5]
# print(len(rSum))

# for i in range(len(rSum)):
#     print(i, end=" ")
# print()

# for i in range(1, len(rSum)):
#     # print(i, end=" ")
#     print(rSum[i], end=" ")
# print()

## Calc

# print(
#     """
# ****** Welcome to Calc ******

# Enter num1, operation, num2 in the respective order
# Operations can be (+, -, *, /)
# """
# )
# num1 = int(input("num1: "))
# operation = input("operation: ")
# num2 = int(input("num2: "))

# if operation == "+":
#     result = num1 + num2
# elif operation == "-":
#     result = num1 - num2
# elif operation == "*":
#     result = num1 * num2
# elif operation == "/":
#     result = num1 / num2

# print(f"\nResult = {result}")

sepr = "d"
a = 2
b = 3
print(f"{a} {b}")
print(f"{a} {b}", end=" ")
print(a, b, sep=sepr)

print(a * b)

x = "Hello"
times = 5
## prints string 5 times
print(x * times)


## input()[0] = “take the first character of the user input”
if input()[0] == "y":
    print("Yes")


## codeForces 4A

w = int(input())

if w > 2 and w % 2 == 0:
    print("YES")
else:
    print("NO")
