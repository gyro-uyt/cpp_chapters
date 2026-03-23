'''
# General Naming Rules (Syntax)

>Names must start with a letter (a-z, A-Z) or underscore (_).
>The rest of the name can contain letters, numbers (0-9), and underscores.
>Names cannot start with a number (e.g., 40heat is invalid).
>Names cannot be a Python keyword (e.g., if, for, class).
>Names are case-sensitive (myVar and myvar are different).

# File Naming Rules

>Module filenames (.py files) must follow the same rules as variable names.
>Cannot start with a number (e.g., 40.heat.py is invalid).
>Use snake_case for filenames (e.g., heat_40.py).
>Avoid spaces and special characters (except underscores).

Type:             | Convention:         | Example:
Variables         | snake_case          | my_variable
Functions         | snake_case          | def my_function():
Classes           | PascalCase          | class MyClass:
Constants         | UPPER_SNAKE_CASE    | MY_CONSTANT = 42
Modules (files)   | snake_case          | my_module.py
Private variables | _leading_underscore | _private_var

# Summary

Start names with a letter or _.
Use snake_case for variables, functions, and files.
Use PascalCase for classes.
Avoid numbers, spaces, hyphens, and keywords.
Follow PEP 8 for consistency.

'''

## Valid names:
# my_var
# myVar
# _var
# module42

## Invalid names:
# 40heat      # Starts with a number
# my-var      # Contains a hyphen
# class       # Python keyword
