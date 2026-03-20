def func1():
    try:
        l = [1, 5, 6, 7]
        i = int(input("Enter the index: "))
        print(l[i])
        return 1
    except:
        print("Some error occurred")
        return 0
    finally:
        print("I am always executed")
    print("Why not put code here, why use finally")
    # bcz. even if function in returned is try/except block, finally gets executed nonetheless


x = func1()
print(x)
