import random

"""
            S W G
computer:   0 1 2
player: S 0 D W L
        W 1 L D W
        G 2 W L D
"""
items = {1: "Snake", 2: "Water", 3: "Gun"}
points = [[0, 1, -1], [-1, 0, 1], [1, -1, 0]]
user_score = 0
print("\n", "Welcome to the game of Snake, Water & Gun".center(50, "-"))
print(
    "\nNote: There will be 3 rounds, best of 3 would be considered to find the Winner"
)

for i in range(1, 4):
    print("\n", f"Round {i}".center(20, "="))
    print("1. Snake\n2. Water\n3. Gun")
    user_choose = int(input("Choose your move (1/2/3): "))
    computer_choose = random.randint(1, 3)
    print(f"Computer chose {computer_choose}: {items[computer_choose]}")
    this_round_score = points[user_choose - 1][computer_choose - 1]
    match this_round_score:
        case -1:
            print("You loose")
        case 0:
            print("It's a tie")
        case 1:
            print("You win")
    user_score += this_round_score

print("\nGame Over, Calculating result...")
if user_score > 0:
    print("You Won the game".center(50, "+"))
elif user_score == 0:
    print("The game was a Tie".center(50, "="))
else:
    print("You Lost the game".center(50, "-"))
