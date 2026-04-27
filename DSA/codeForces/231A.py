n = int(input())  # number of questions
store = []
for i in range(n):
    s = list(input())
    for c in s:
        if c == " ":
            s.remove(c)
    store.append(s)

# print(store)

count_qa = 0
for l in store:
    count_1 = 0
    for c in l:
        if int(c) == 1:
            count_1 += 1
        if count_1 > 1:
            count_qa += 1
            break

print(count_qa)

# [0, 0, 0] = X
# [0, 0, 1] = X
# [0, 1, 0] = X
# [0, 1, 1] = Y
# [1, 0, 0] = X
# [1, 0, 1] = Y
# [1, 1, 0] = Y
# [1, 1, 1] = Y
