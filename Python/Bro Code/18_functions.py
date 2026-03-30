# function = a block of reusable code
#   place () after name of function to invoke the function

# return = statement used to end a function
#   and send a result back to the caller

# default arguments =  a default value for certain parameters
#   default is used when that argument is omitted
#   make your function more flexible, reduces number of arguments
# Type:  1. positional, 2. default, 3. keyword, 4. arbitrary

import time


# Note: Put default arguments at last, so that users can skip them
def count(end, start=0):
    for x in range(start, end + 1):
        print(x)
        time.sleep(1)
    print("DONE!")


count(10)
count(20, 15)
