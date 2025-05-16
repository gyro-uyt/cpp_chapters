#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v1{33, 35, 75};

    for_each(v1.begin(), v1.end(), [](int x) {
        cout << x << endl;
    });
    // [cc](p){fd};
    // [capture clause](parameter){function descryption};
    // [capture close](int x){cout<<x<<endl;};

    int d = 7;
    int e = 9;

    for_each(v1.begin(), v1.end(), [d](int x) {
        if(x % d == 0)
            cout << x << " is divisible by " << d << endl;
        else
            cout << x << " is not divisible by " << d << endl;

        // d=23;    // error
        // only if we write a variable name in CC we can use it in lambda function and it should be in the brackets that contain the lambda expression, in this case main's {}
        // NOTE:
        //  1. To include all the variables use '=' in CC
        //  2. These values CANNOT be changed
        //  3. to change the values, use '&' along with variable name, and for all variable just use "&" in CC
    });

    [ = ]() {
        cout << d << " " << e << endl;
    }
    ();     // lambda is defined and immediately invoked

    [&]() {
        d = 69;
        e = 13;
        cout << d << " " << e << endl;
    }
    (); // <-- these parentheses call the lambda

    [&e]() {
        e = 100;
        cout << e << endl;
    }
    ();


    // lamba with return type
    int w = []()->int{
        int y = 23;
        return y;
    }
    ();
    cout << w << endl;

    /*
    Lambda Syntax

    [capture](parameters) -> return_type {
        // function body
    };

    1. Capture Clause ([])
        Controls what variables from outside are visible inside the lambda.
        Syntax	         Meaning
        [a]	             Capture a by value
        [&a]	         Capture a by reference
        [=]	             Capture all used variables by value
        [&]	             Capture all used variables by reference
        [=, &a]	         Capture all by value, but a by ref
        [&, a]	         Capture all by reference, but a by value

    2. Parameter List (())
        Like a normal function:
        [](int x, int y){ return x + y; };

    3. Return Type (-> type)
        Optional if C++ can deduce it:
        []() -> int { return 42; };

    4. Function Body ({})
        What the lambda actually does.

    5. Lambda with auto
        Since lambdas are anonymous, you usually store them in an auto variable:
        auto greet = []() {
            cout << "Hello!\n";
        };
        greet();  // call the lambda

    6. Lambda in Algorithms (Real Power)
        #include <algorithm>
        #include <vector>
        int main() {
            vector<int> nums = {1, 2, 3, 4, 5};
            // print all even numbers
            for_each(nums.begin(), nums.end(), [](int x){
                if (x % 2 == 0)
                    cout << x << " ";
            });
        }

    7. Mutable Lambdas
        Mutable captures the copy of CC's variable called and lets you modify it without altering the original
        By default, variables captured by value are read-only inside the lambda. Use mutable to modify them:
        int x = 10;
        auto f = [x]() mutable {
            x = 20;
            cout << x << endl;  // prints 20
        };
        f();
        cout << x << endl;  // still prints 10, because original x wasn't changed

    8. Lambda Inside Lambda
        auto outer = []() {
            return [](int x) {
                return x * x;
            };
        };
        auto square = outer();
        cout << square(5);  // 25

    Summary: When to Use Lambdas
        When passing small logic to STL algorithms (for_each, sort, find_if)
        When you want compact, readable code
        When avoiding writing full functions for short, one-time use
        When capturing context (variables) from outer scope

        If you're doing competitive programming, game dev, or writing clean modern C++, lambdas are super useful.
    */

    // This is how you can call lambda later too
    auto lambda1 = [d]()mutable{
        d = d * d;
        cout << "sq. of 'd' is " << d << endl;
    };

    cout<<"d = "<<d<<endl;
    lambda1();

    return 0;
}