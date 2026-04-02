# __ aka dunder (double underscore)
# if __name__ == "__main__": (this script can be imported OR run standalone)
#                            Functions and classes in this module can be reused
#                            without the main block of code executing


def greet():
    print("Hello!")


if __name__ == "__main__":
    greet()  # Runs only if this file is executed directly
"""
### `if __name__ == "__main__":` in Python

- Purpose:
  Controls whether code runs when the file is executed directly or imported as a module.

- How it works:
  - `__name__` is a special built-in variable.
  - When a file is run directly, `__name__` is set to `"__main__"`.
  - When a file is imported, `__name__` is set to the module's name.

- Use Case:
  Place code under `if __name__ == "__main__":` to ensure it runs only when the file is executed directly, not when imported.     

- Why Use It?
    - Prevents unintended execution of code when the file is imported.
    - Allows reusable scripts that can be both imported and run directly.

"""
