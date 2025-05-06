s1 = "Hey, my name is Gaurav"
length = len(s1)
print(length)
print(len(s1))

print(
    s1[0:3]
)  # this is the format of string slicing [n:m] ---> it prints from index 'n' to index 'm-1'
print(s1[1:3])  # including 1 But not 3

print(s1[:3])  # python automatically fills the empty space with initial index i.e. '0'
print(
    s1[1:]
)  # python automatically fills the empty space with lenght of the string i.e. '22'

print(
    s1[1:-5]
)  # all the negative indexes are added to the lenght of the index, then that lenght is used
# this is same as above
print(s1[1 : len(s1) - 5])

print(s1[-6:-1])
# this is same as below
print(s1[len(s1) - 6 : len(s1) - 1])
