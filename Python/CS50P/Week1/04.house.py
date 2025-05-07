name = input("What's your name? ")

# Switch-case
match name:
    case "Harry" | "Hermione" | "Ron":
        print("Griffindore")
    case "Malfoy":
        print("Slytherine")
    case _:  # default case
        print("Who?")
