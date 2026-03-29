# format specifiers = {value:flags} format a value based on what flags are inserted

price1 = 3.123143
price2 = -924.742
price3 = 3253312.456

# Decimal point precision (:.xf), x representing number of values to present
print(f"Price 1 is {price1:.2f}")
print(f"Price 2 is {price2:.2f}")  # represents only 2 decimal places
print(f"Price 3 is {price3:.5f}")  # pads 0s to make it to 5 decimal precision

# Allocate space to display value (:x), represents the number in 'x' spaces
print(f"Price 1 is {price1:10}")

# Allocate space to display value with 0s padding (:0x), represents the number in 'x' spaces with 0 padding
print(f"Price 1 is {price1:010}")

# Left justify a value (:<x), space for padding is at right and value is displayed on left
print(f"Price 1 is {price1:<010}")

# Right justify a value (:>x) default, space for padding is at left and value is displayed on right
print(f"Price 1 is {price1:>010}")

# Centre justify a value (:>x) default, space for padding is at left & right and value is displayed in middle
print(f"Price 1 is {price1:^010}")

# Any positive number is given a '+' sign
print(f"Price 1 is {price1:+}")

# Any positive number is given a ' ' space
print(f"Price 1 is {price1: }")

# Thousands separator, a comma at every 3rd place from right
print(f"Price 3 is {price3:,}")

# You can combine these specifiers also
print(f"Price 3 is {price3:<+020,.2f}")
