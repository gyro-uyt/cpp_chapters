# make a kbc type q/a pallete


def kbc(q, o1, o2, o3, o4, ans):
    global count
    count += 1
    print(count, ". ", q, "\n", o1, "\t", o2, "\t", o3, "\t", o4)
    usr_ans = int(input("Type 1/2/3/4: "))
    if usr_ans == ans:
        print("7 CRORE!!!")
    else:
        print("Oh no :(")


count = 0
kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
kbc("What is the capital of M.P.?", "Agra", "Morena", "Bhopal", "Gwalior", 3)
