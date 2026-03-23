import os
import shutil

# if (not os.path.exists("data")):
#     os.mkdir("data")

# for i in range(0,10):
#     os.mkdir(f"data/Day{i+1}")

# for i in range(0,10):
#     os.rename(f"data/Day{i+1}",f"data/Tut_{i+1}")

# folders = os.listdir("data")
# print(folders)

# for folder in folders:
#     print(folder)
#     print(os.listdir(f"data/{folder}"))

# cmd = 'date'
# os.system(cmd)

print(os.getcwd())
os.chdir("/BX/cpp_chapters/Python/CWH-100")
print(os.getcwd())

# os.remove("data.md") # removes a file
# os.rmdir("data") # removes an empty directory
# shutil.rmtree("data") # deletes a directory and it's contents

# look up more about os-module on internet
