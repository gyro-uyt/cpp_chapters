import os

# Note: '\' may causes errors in string while writing address due to it being escape sequence character, hence use '|' or '\\'
file_path = "C:/Users/HP/Desktop/test"

if os.path.exists(file_path):
    print(f"The location '{file_path}' exists")

if os.path.isfile(file_path):
    print("That is a file")
elif os.path.isdir(file_path):
    print("That is a directory")

else:
    print("That location doesn't exist")
 