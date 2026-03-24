f = open("myfile.txt", "r")
# print(f)
text = f.read()
print(text)
f.close()

# open("<file_name>", "file_mode")
# Modes in file (r/w/a):
# read(r): this mode opens the file for reading only and gives an error if the file does not exist, this is the Default mode
# write(w): this mode opens the file for writing only and creates a new file if the file not exists
# append(a): this mode opens the file for appending only and creates a new file if the file does not exists
#
# create(x): this mode creates a file and gives an error if file already exists
# text(t): this mode is used to handle text files, there' no diff btw 'r' and 'rt' or 'w' and 'wt' since text mode is default, default mode is 'r' (open for reading text, synonym of 'rt')
# binary(b): this mode is used to handle binary files (images, pdf, etc.)

# Writing a file
f = open("myfile.txt", "w")
f.write("Hello, World")
f.close()

# Appending a file
f = open("myfile.txt", "a")
f.write("\nHello, World")  # adds this text at end of file as many times as you run this
f.close()

# Note: Always close() after open(), else your operations may not be performed

# Method to bypass close() is 'with'
with open("myfile.txt", "a") as f:
    f.write("Hey, I am inside with")
    # Here, close() is not needed
