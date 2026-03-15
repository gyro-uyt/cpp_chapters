# Python Notes — Session 1

## 1. Everything in Python is a Pointer

Every variable — integers, strings, lists, functions, everything —
is a reference to an object in memory. No value types like C++.

```python
a = [1, 2, 3]
b = a           # b points to SAME list, not a copy
b.append(4)
print(a)        # [1, 2, 3, 4]

b = 10          # reassigns pointer — doesn't affect a
b.append(4)     # mutates the object b points to
```

---

## 2. Reference Counting & Garbage Collection

Python counts how many variables point to each object. Count hits zero → destroyed automatically. No manual `free()`.

```python
a = [1, 2, 3]   # count = 1
b = a            # count = 2
a = None         # count = 1 — still alive, b points to it
b = None         # count = 0 — destroyed
```

---

## 3. Mutable vs Immutable

| Type | Mutable |
|------|---------|
| list | yes |
| tuple | no |
| str | no |
| int, float | no |

```python
# immutable — creates new object
a = 5
b = a
b += 1
print(a)        # 5 — unchanged, b points to new object 6

# mutable — modifies in place
a = [1, 2, 3]
b = a
b += [4]
print(a)        # [1, 2, 3, 4]

# TRICK
b = b + [4]     # creates new list, reassigns b
b += [4]        # modifies in place — += is NOT just shorthand for b = b + ...
```

---

## 4. Collection Types

| Type | Syntax | Ordered | Mutable | Duplicates | C++ equivalent |
|------|--------|---------|---------|------------|----------------|
| list | `[]` | yes | yes | yes | vector |
| tuple | `()` | yes | no | yes | const vector |
| set | `{}` | no | yes | no | unordered_set |
| dict | `{k:v}` | no | yes | no | unordered_map |

---

## 5. Sets & Hashing

Only immutable (hashable) objects allowed in sets. Mutable objects can change → hash changes → set can't find them.

```python
{1, 2, 3}           # ok — int immutable
{"hello", "world"}  # ok — str immutable
{(1, 2), (3, 4)}    # ok — tuple immutable
{[1, 2], [3, 4]}    # ERROR — list mutable, unhashable

# lookup speed
999999 in my_list   # O(n) — checks one by one
999999 in my_set    # O(1) — jumps directly via hash
```

---

## 6. List Comprehensions

Read left to right like English: "give me X for each Y in Z".

```python
# verbose C++ style
squares = []
for x in [1, 2, 3, 4, 5]:
    squares.append(x * x)

# pythonic
squares = [x*x for x in [1, 2, 3, 4, 5]]

# with filter
even_squares = [x*x for x in [1, 2, 3, 4, 5] if x % 2 == 0]  # [4, 16]

# set comprehension — dupes auto removed
{x*x for x in [1, 2, 2, 3, 3]}      # {1, 4, 9}

# dict comprehension
{x: x*x for x in [1, 2, 3, 4]}      # {1:1, 2:4, 3:9, 4:16}

# always creates a NEW collection — never modifies original
```

---

## 7. Functions as First-Class Objects

Functions are objects — the name is just a pointer.

```python
double          # the function object (pointer)
double(5)       # calling it → 10

# pass functions as arguments — follows DRY principle
def apply_to_all(func, numbers):
    return [func(x) for x in numbers]

apply_to_all(double, [1, 2, 3, 4, 5])  # [2, 4, 6, 8, 10]
apply_to_all(square, [1, 2, 3, 4, 5])  # [1, 4, 9, 16, 25]
# one function instead of apply_double, apply_square, apply_triple...
```

---

## 8. Function Arguments

```python
def multiply(x, factor=2):    # factor=2 is a default parameter
    return x * factor

multiply(5)                # 10 — uses default
multiply(5, 3)             # 15 — overrides default
multiply(factor=10, x=3)   # 30 — named args, order doesn't matter
```

---
