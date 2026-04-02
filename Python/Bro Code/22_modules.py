# module = a file containing code you want to include in your program
#          use 'import' to include a module (built-in or your own)
#          useful to break up a large program reusable separate files

# print(help("modules")) # list all modules
# print(help("math"))  # get more info of specific module

# import math
# print(math.tau)

import math as m  # making an alias name for module name

print(m.tau)

# from math import tau # importing only a specific module
# print(tau) #! this method not recommended as there can be name conflicts

## Using user-defined modules

import example_module as em

print(em.name)
em.hero()
print(em.area_of_circle(5))

"""
Python Module Naming Rules:
    - Allowed: Letters (`a-z`, `A-Z`), digits (`0-9`), underscores (`_`).
    - Must not: Start with a digit, use hyphens/spaces, or conflict with Python keywords (e.g., `if.py`).
    - File extension: `.py` (e.g., `module.py`).
    - Case-sensitive: `mymodule.py` ≠ `MyModule.py`.
    - Avoid: Shadowing standard library names (e.g., `math.py`).
    - Special cases:
        - `_name.py` → Private (not imported by `from module import *`).
        - `__init__.py` → Package initializer.
    - Best practice: Use lowercase_with_underscores.
"""
