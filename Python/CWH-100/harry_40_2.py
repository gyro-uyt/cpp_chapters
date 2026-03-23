def welcome():
    print("hey you are Welcome, from harry")


welcome()
print(
    "If this file is imported somewhere, Code written normally like here would executed automatically"
    
)

print(__name__)
if __name__ == "__main__":
    welcome
    print("Code in this block, executes only when this file is run")
