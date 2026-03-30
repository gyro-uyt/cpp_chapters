import random

# print(help(random))

print(random.randint(1, 6))  # both indices are included
print(random.random())  # random floating point number btw 0 and 1

options = ("rock", "paper", "scissor")
print(random.choice(options))  # gives random element from the iterable

cards = ["2", "3", "4", "5", "6", "8", "9", "10", "J", "Q", "K", "A"]
random.shuffle(cards) # shuffles the order of the give iterable in-place
print(cards)
