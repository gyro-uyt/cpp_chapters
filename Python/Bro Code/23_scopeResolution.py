# Variable scope = where a variable is visible and accessible

"""
### Scope Resolution in Python
Python resolves variable names using the LEGB Rule (Local → Enclosing → Global → Built-in):

1. Local (L):
   - Innermost scope (e.g., variables inside a function).
   - Takes precedence over all other scopes.

2. Enclosing (E):
   - Variables in the local scope of enclosing functions (e.g., nested functions).
   - Used in closures.

3. Global (G):
   - Variables defined at the module level (outside functions/classes).
   - Accessed using `global` keyword to modify.

4. Built-in (B):
   - Predefined names in Python (e.g., `print`, `len`).
   - Overridden if a local/global variable shares the name.

---
#### Key Notes:
- Use `global` to modify a global variable inside a function.
- Use `nonlocal` to modify a variable in an enclosing (non-global) scope.
- Avoid shadowing built-in names (e.g., don't name a variable `list`).
"""

# Example:
x = 10  # Global scope


def outer():
    x = 20  # Enclosing scope

    def inner():
        x = 30  # Local scope
        print(x)  # Output: 30 (local)

    inner()
    print(x)  # Output: 20 (enclosing)


outer()
print(x)  # Output: 10 (global)
