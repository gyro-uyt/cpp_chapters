Code: 

```c
#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer start, size_t len) {
  int i;
  for (i = 0; i < len; i++)
    printf("%.2x", start[i]);
  printf("\n");
}

void show_int(int x) { show_byte((byte_pointer)&x, sizeof(int)); }
void show_float(float x) { show_byte((byte_pointer)&x, sizeof(float)); }
void show_pointer(void *x) { show_byte((byte_pointer)&x, sizeof(void *)); }

void test_show_bytes(int val) {
  int ival = val;
  float fval = (float)ival;
  int *pval = &ival;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
}
int main() {
  int n = 12345;
  test_show_bytes(n);

  return 0;
}
```

Q. How this typedef unsigned char *byte_pointer; works for int float etc when this for char??
Ans. 
This is the most critical trick in C systems programming! It works because of how C views **memory** versus how it views **types**.

To understand why this works for `int` and `float`, you have to stop thinking of `char` as "text" or "letters."

In C, `unsigned char` actually means **"one raw byte of memory."**

### 1. The "Universal Measuring Stick"

In C, the size of a `char` is defined as exactly **1 byte** (8 bits).

- An `int` is usually **4 bytes**.
    
- A `float` is usually **4 bytes**.
    
- A `char` is **1 byte**.
    

Because `char` is the smallest addressable unit of memory, we use it as a "measuring stick" to step through memory one tiny slice at a time.

### 2. The Pointer Trick (The Cast)

When you write `(byte_pointer)&x`, you are performing a **pointer cast**. This tells the compiler to put on a different pair of glasses.

Imagine you have an integer `int n = 12345`. In memory, it takes up 4 slots (bytes).

#### The `int *` View (Normal View)

If you look at `n` with a normal `int *` pointer:

- **The Compiler sees:** One giant 4-byte chunk.
    
- **Math:** If you try to do `pointer + 1`, the compiler jumps forward **4 bytes** at a time to get to the "next integer." You skip the internal details.
    

#### The `unsigned char *` View (The Byte View)

When you cast that address to `unsigned char *` (which is what `byte_pointer` is):

- **The Compiler sees:** A sequence of 4 separate, 1-byte chunks.
    
- **Math:** Now, when you do `pointer + 1` (or `start[i]`), the compiler jumps forward only **1 byte**.
    

### Visualizing the difference

Let's say your integer lives at memory address 1000.

**Scenario A: Without the cast (Using `int*`)**

- `ptr[0]` reads 4 bytes starting at address 1000 (The whole number).
    
- `ptr[1]` jumps to address 1004 (The next integer).
    

**Scenario B: With the cast (Using `byte_pointer`)**

- `start[0]` reads 1 byte at address 1000.
    
- `start[1]` reads 1 byte at address 1001.
    
- `start[2]` reads 1 byte at address 1002.
    
- `start[3]` reads 1 byte at address 1003.
    

### Why `unsigned`?

We use `unsigned` char because we want to see the raw binary value (0 to 255).

If we used a regular `signed char`, a byte containing `0xFF` (all ones) might be interpreted as the number `-1`. We don't want negative math; we just want the raw hex patterns.

### Summary

The code works because **memory has no type.** Memory is just a long row of bytes.

- `int` tells the computer "Treat these 4 bytes as one number."
    
- `byte_pointer` tells the computer "Treat these 4 bytes as... well, 4 individual bytes."
    

By casting `&x` to `byte_pointer`, you are stripping away the "Integer" label and looking at the raw engine parts underneath.