# Notes

## Modular Arithmetic

### What is Modulo?

* `a % m` → remainder when `a` is divided by `m`
* Used to keep numbers small in problems

---

### Why use (10^9 + 7)?

* `1000000007` is **prime**
* Prevents overflow (in C++/Java)
* Ensures division works via modular inverse

---

### Core Properties

#### Addition

(a + b) % m = ((a % m) + (b % m)) % m

#### Multiplication

(a x b) % m = ((a % m) x (b % m)) % m

---

### Division (Common Mistake)

(a / b) % m != ((a % m) / (b % m)) % m

---

### Correct Division (Modular Inverse)

(a / b) % m = (a xs b^{-1}) % m

In Python:

```python
(a * pow(b, -1, m)) % m
```

---

### Important Tips

* Always apply `% m` if problem asks
* Use `//` (integer division), not `/`
* Avoid large intermediate values (mod early if needed)

---

### Common Pattern

```python
MOD = 10**9 + 7

# Safe formula example
result = (n * (n + 1) // 2) % MOD
```

---

### One-line Summary

> Modulo keeps numbers small and safe; addition & multiplication work normally, but division needs modular inverse.

## if / elif / else

Use elif when you have multiple mutually exclusive conditions to check. This is more efficient than using multiple separate if statements because Python stops checking once it finds a true condition.
