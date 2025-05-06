# conversion of one data-type to another is TypeCasting, valid conversions should be there
#   --1) explicit conversion ---> user does it manualy
#   --2) implicit conversion ---> python does it automatically,
#        python converts a smaller data-type into higer data-type to prevent data-loss
#        example
a = 3  # --->int
b = 5.5  # --->float
print(a + b)  # --->float --->implicit conversion

x1 = 1
x2 = 2
print(x1 + x2)

y1 = "1"  # --->string
y2 = "2"  # --->string
print(y1 + y2)  # as y1 & y2 are strings, + Concatinates it
print(int(y1) + int(y2))  # ---> this is typeCasting
