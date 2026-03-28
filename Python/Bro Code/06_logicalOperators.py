# logical operators evaluate multiple conditions (or, and, not)
#
# or = at least one condition must be True
# and = all conditions must be True
# not = inverts the condition (not False, not True)

temp = 20
is_raining = True

if temp > 35 or temp < 0 or is_raining:
    print("The outdoor event is cancelled")
else:
    print("The outdoor event is still scheduled")

temp = 25
is_sunny = True

if temp >= 28 and not is_sunny:
    print("It is hot outside and sunny")
else:
    print("None")
