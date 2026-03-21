a = 3033
b = 3303

print("a") if a > b else print("=") if a == b else print("b")
# Same both below & above
# if a > b:
#     print("a")
# elif a == b:
#     print("=")
# else:
#     print("b")

c = 9 if a > b else 0
print(c)
