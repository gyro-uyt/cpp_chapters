# similar to switch-case of the c++,
# writing break is not necessary here, in c++ not writing break resulted in the following case no matter what the condition

# print("Enter your age admirinal: ")
a = int(input("Enter your age admirinal: "))
match (a):  # these () are totally Optional
    case (18):  # these () are totally Optional
        print("Congratulations on becoming an adult")
    case (22):
        print("Darth Vader is the True Lord")
    case (16):
        print("Watch yourself kiddo")
    case (99):
        print("How long are you gonna be a burden")
    case 0:     # these () are totally Optional
        print("Welcome, sweet-heart")

# Multiple default-cases can be there
    case _ if a!=90:    # in case of a = 90 this case will be false, hence following case will run
        print(a, "is not equal to 90")
    case _ if a!=80:
        print(a, "is not equal to eighty")
# ---> this is the Default case
    case _ : 
        print("You're not one of us")
