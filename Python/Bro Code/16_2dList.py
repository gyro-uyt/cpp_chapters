fruits = ["apple", "orange", "banana", "coconut"]
vegetables = ["celery", "carrots", "potatoes"]
meats = ["chicken", "fish", "turkey"]

groceries = [fruits, vegetables, meats]

# print(groceries)
# print(groceries[1][0])

# Quiz game

questions = (
    "How many elements are in the periodic table ?",
    "Which animal lays the largest eggs ?",
    "What is the most abundant gas in Earth's atmosphere ?",
    "How many bones are in the human body ?",
    "Which planet in the solar system is the hottest ?",
)

options = (
    ("A. 116", "B. 117", "C. 118", "D. 119"),
    ("A. Whale", "B. Crocodile", "C. Elephant", "D. Ostrich"),
    ("A. Nitrogen", "B. Oxygen", "C. Carbon-Dioxide", "D. Hydrogen"),
    ("A. 206", "B. 207", "C. 208", "D. 209"),
    ("A. Mercury", "B. Venus", "C. Earth", "D. Mars"),
)

answers = ("C", "D", "A", "A", "B")
guesses = []
score = 0
question_num = 0

for question in questions:
    print(f"\nQ.{question_num+1}", "".center(15, "-"))
    print(question)
    for option in options[question_num]:
        print(option)
    guess = input("Enter (A, B, C, D): ").upper()
    guesses.append(guess)
    if guess == answers[question_num]:
        score += 1
        print("CORRECT!")
    else:
        print("INCORRECT!")
        print(f"{answers[question_num]} is the correct answer")
    question_num += 1

# print(answers)
# print(guesses)
print(f"\nYOUR SCORE: {score}/{len(questions)}")
