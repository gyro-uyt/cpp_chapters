#include <iostream>
using namespace std;

// "inline" is not a Command but REQUEST to the Compler
inline int product(int a, int b){       // use inline for small codes like this only
    return a*b;                        
}
/* The inline keyword in C++ is used as a suggestion to the compiler, indicating that a particular function should be 
expanded "in line" at the point of call, rather than going through the usual process of calling the function via a function call.*/

int main(){
    int x,y;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
// here, function was called many times, so using inline is usefull
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    return 0;
}

//* why not make every call function inline?????

// Making every function inline might seem like a good idea for better performance, but it has significant downsides. Here’s why not all functions should be inline:
//* 1. Increased Code Size (Code Bloat)

//     Inline functions replace the function call with the actual code.
//     For large functions or functions that are called multiple times, this can significantly increase the size of the compiled code (binary).

// Example:

// inline int largeFunction() {
//      Imagine 50 lines of code here
//     return 42;
// }

// int main() {
//     largeFunction(); // Expands to 50 lines
//     largeFunction(); // Expands to another 50 lines
// }

//     If this function is called 100 times, the final binary size will explode because all 100 calls will expand into 50 lines each.

//* 2. Slower Performance in Some Cases

//     Larger code size causes the CPU's instruction cache to fill up quickly.
//     A full instruction cache leads to cache misses, which slow down the program instead of speeding it up.

//* 3. Not Suitable for Recursion

//     Inline functions cannot be used for recursive functions because recursion inherently requires a function call.
//     Example:

//     inline int factorial(int n) {
//         return (n <= 1) ? 1 : n * factorial(n - 1); // Function can't inline itself here.
//     }

//* 4. Compiler Limitations

//**    The inline keyword is only a request to the compiler. The compiler may ignore the inline request if:
//       1)  The function is too complex.
//       2)  Inlining would lead to inefficiencies.

// 5. Debugging Becomes Harder

//     Inline functions don’t show up as separate functions in a debugger, making it harder to trace issues during debugging.

//* 6. No Advantage for Rarely Called Functions

//     If a function is called only a few times, inlining provides no meaningful performance gain but still increases code size.

//* Best Practices for Inline Functions

//*     Use Inline for Small, Frequently Called Functions:
//         Example: Getters, setters, or simple math operations.

//     inline int add(int a, int b) {
//         return a + b;
//     }

//     Avoid Inlining Large Functions:
//         For large functions, let the compiler optimize them using its own strategies.

//     Don't Force Inline:
//         Trust the compiler to make inlining decisions based on optimization settings.

//     Modern Compilers Are Smart:
//         With optimizations enabled (-O2 or -O3), modern compilers automatically inline functions when beneficial, even if you don’t mark them inline.

// Summary

// Inlining every function would lead to:

//     Increased code size.
//     Slower execution in some cases.
//     Inefficient memory use.

// Use inline strategically for small, frequently called functions, and let the compiler handle the rest!
