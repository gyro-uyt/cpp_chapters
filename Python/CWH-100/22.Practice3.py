# make a kbc type q/a palette


# def kbc(q, o1, o2, o3, o4, ans):
#     global count
#     count += 1
#     print(count, ". ", q, "\n", o1, "\t", o2, "\t", o3, "\t", o4)
#     usr_ans = int(input("Type 1/2/3/4: "))
#     if usr_ans == ans:
#         print("7 CRORE!!!")
#     else:
#         print("Oh no :(")


# count = 0
# kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
# kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
# kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
# kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)


print("Welcome to KBC".center(50, "-"))

winMoney = [
    1000,
    2000,
    3000,
    5000,
    10000,
    20000,
    40000,
    80000,
    160000,
    320000,
    640000,
    1250000,
    2500000,
    5000000,
    10000000,
]
securedMoney = 0
questions = [
    [
        "Which is the second highest rated manga?",
        "One Piece",
        "Berserk",
        "Monster",
        "JoJo SBR",
        4,
    ],
    [
        "Which manga features a protagonist with a straw hat?",
        "Naruto",
        "One Piece",
        "Bleach",
        "Attack on Titan",
        2,
    ],
    [
        "Which manga is known for its dark fantasy and gritty storytelling?",
        "Berserk",
        "Tokyo Ghoul",
        "Death Note",
        "Parasyte",
        1,
    ],
    [
        "Which manga follows a genius doctor turned serial killer hunter?",
        "Monster",
        "Death Note",
        "Fullmetal Alchemist",
        "Hunter x Hunter",
        1,
    ],
    [
        "Which manga is set in a world where alchemy is a central science?",
        "Fullmetal Alchemist",
        "Attack on Titan",
        "Bleach",
        "Naruto",
        1,
    ],
    [
        "Which manga features a race of humanoid Titans?",
        "Attack on Titan",
        "Tokyo Ghoul",
        "Vinland Saga",
        "Kingdom",
        1,
    ],
    [
        "Which manga follows a young boy training to become Hokage?",
        "Naruto",
        "Bleach",
        "One Piece",
        "Hunter x Hunter",
        1,
    ],
    [
        "Which manga revolves around Soul Reapers and Hollows?",
        "Bleach",
        "Death Note",
        "Tokyo Ghoul",
        "Parasyte",
        1,
    ],
    [
        "Which manga is about a college student who becomes a half-ghoul?",
        "Tokyo Ghoul",
        "Vinland Saga",
        "Monster",
        "Berserk",
        1,
    ],
    [
        "Which manga is set in Viking-era Europe?",
        "Vinland Saga",
        "Kingdom",
        "Parasyte",
        "JoJo SBR",
        1,
    ],
    [
        "Which manga features a parasitic alien invasion?",
        "Parasyte",
        "Death Note",
        "Attack on Titan",
        "Bleach",
        1,
    ],
    [
        "Which manga follows Miyamoto Musashi's journey to become the greatest swordsman?",
        "Vagabond",
        "Kingdom",
        "Berserk",
        "One Piece",
        1,
    ],
    [
        "Which manga is set in ancient China and follows a war orphan's rise to power?",
        "Kingdom",
        "Vinland Saga",
        "Naruto",
        "Bleach",
        1,
    ],
    [
        "Which manga features a notebook that can kill anyone whose name is written in it?",
        "Death Note",
        "Monster",
        "Fullmetal Alchemist",
        "Attack on Titan",
        1,
    ],
    [
        "Which manga is about a young boy searching for the ultimate treasure?",
        "One Piece",
        "Naruto",
        "Bleach",
        "Hunter x Hunter",
        1,
    ],
]

for i in range(0, 15):
    print(f"\n\nFor Rs. {winMoney[i]} the question is,")
    print(f"{questions[i][0]}")
    print(
        f"Your options are:\n1. {questions[i][1]}\t2. {questions[i][2]}\n3. {questions[i][3]}\t4. {questions[i][4]}"
    )
    usrAns = int(input("Enter your option number (1-4): "))
    if usrAns == questions[i][-1]:
        print(f"\nCongratulations you have won Rs. {winMoney[i]}!")
    else:
        print(
            f"\nSorry, but your ans is Wrong, your game ends here.\nYou have Won Rs. {securedMoney}\nThe correct ans for that question was option {questions[i][-1]}: {questions[i][questions[i][-1]]}"
        )
        break
        
    if i == 4:
        securedMoney = winMoney[i]
    elif i == 9:
        securedMoney = winMoney[i]
    elif i == 14:
        securedMoney = winMoney[i]

    if i == 14:
        print("\nYou have completed the game of KBC".center(50, "-"))
