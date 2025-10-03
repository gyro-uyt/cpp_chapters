score = 0
display_board = """     _______
                        /       \\
                       |        |
                       *        *
                       |        |
                      \\       /
                        _______"""
current_equation = []
max_tokens = 5


def update_display():
    global display_board, current_equation
    display_board = """     _______
                        /       \\
                       |        |
                       *        *
                       |        |
                      \\       /
                        _______"""  # Reset the board on each update
    if not current_equation:
        display_board += "\r\nNo equation entered yet."

    equation = ""
    for token in current_equation:
        if isinstance(token, int) and 1 <= token < 10:
            equation += str(token)
        else:
            equation += " "
    display_board += f"\r\n[{equation}]"
    print(display_board)


def parse_input():
    global current_equation, max_tokens
    while len(current_equation) < max_tokens:
        try:
            token = input(
                "Enter a number or operator (-: 5,7,9; +**/: > < = ) [Press Enter to finish]: "
            ).strip()
            if token == "":
                break  # Finish input if Enter is pressed without any input
            elif token.isdigit():
                current_equation.append(int(token))  # Append number if it's valid
            elif token in "-+*/<>=":  # Check for valid operators
                current_equation.append(token)
            else:
                print("Invalid input. Please enter a valid number or operator.")
        except ValueError:
            print("Error: Invalid input.")

    update_display()  # Update the display after input


def game_over():
    global score, display_board, current_equation
    print("Game Over!")
    current_equation = []  # Clear the current equation when the game is over
    display_board = """     _______
                        /       \\
                       |        |
                       *        *
                       |        |
                      \\       /
                        _______"""  # Reset the board
    score = 0  # Reset the score
    update_display()  # Update the display


# Example function calls for testing
parse_input()  # Gather input
game_over()  # Simulate game over and reset the game
