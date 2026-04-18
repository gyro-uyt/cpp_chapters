# Python reading files (.txt, .json, .csv)

import csv

file_path = "C:/Users/HP/Desktop/input.csv"

try:

    with open(file_path, "r") as file:
        content = csv.reader(file)
        for line in content:
            print(line)
except FileNotFoundError:
    print("That file was not found")
except PermissionError:
    print("You do not have permission to read that file")
