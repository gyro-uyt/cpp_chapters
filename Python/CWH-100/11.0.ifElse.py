age = int(input("Enter your age: "))

if age > 18:
    # this forward empty space is called INDENTATION it works same as {} of c++
    print("You're eligble to watch the movie")

elif age == 18:
    print("This might be you're first time but won't be Last")

else:
    if 18 - age == 1:
        # this indentation specifies that this executes,
        print("Comeback again in an year :)")
    else:
        print("Comeback again in", (18 - age), "years :)")
