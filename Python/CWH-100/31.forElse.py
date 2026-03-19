# While the loop condition is true loop block gets executed &
# When the loop conditions gets false then the else block will execute

for i in range(5):
    print(i)
else:
    print("Operation Completed")

j = 0
while j < 7:
    print(j)
    j += 1
    if j == 4:
        j = 7
else:
    print("This got printed because loop condition got false after @i==4")

# How else Works with Loops

# The else block executes only if the loop completes normally (i.e., not due to a break statement).
# If the loop exits because the condition becomes False, the else block runs.
# If the loop exits due to a break, the else block does not run.

j = 0
while j < 7:
    print(j)
    j += 1
    if j == 4:
        break
else:
    print("Else block not executed, as loop ended due to break")
