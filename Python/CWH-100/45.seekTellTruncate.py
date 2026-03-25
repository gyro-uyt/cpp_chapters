with open("myfile2.txt", "r") as f:
    print(type(f))
    print(f.tell())

    # Move to the 10th byte in the file
    f.seek(10)

    # Tells from where reading will start
    print(f.tell())

    # Reads the next 5 bytes
    data = f.read(5)
    print(data)

with open("myfile2.txt", "w") as f:
    f.write("Hello, World!")

    # Files gets to the size of first 5 bytes only, trims down to first 5 bytes
    f.truncate(5)
