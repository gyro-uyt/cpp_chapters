#include <iostream>
using namespace std;

void exchange(int *p, int *q)
{
    cout << p << " " << q << endl;
    int temp = *p;      // Dereference p to get the value
    *p = *q;
    *q = temp;
    cout << p << " " << q << endl;
}
// void exchange(int *p, int *q)
// {
//     cout << p << " " << q << endl;
//     int *temp = p;
//     p = q;
//     q = temp;
//     cout << p << " " << q << endl;
// }

int main()
{
    int a, b, temp;
    cout << "Enter a and b " << endl;
    cin >> a >> b;
    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;
    // temp=a;
    // a=b;
    // b=temp;
    //* swap(a,b);
    exchange(&a,&b);

    int *x = &a;
    int *y = &b;
    cout << x << " " << y << endl;

    cout << a << " " << b << endl;
    return 0;
}

// // WAP to Swap 2 no.s via classes and friends

// //* method-1
// // #include <iostream>
// // using namespace std;

// // class Swap
// // {
// //     int a, b;

// // public:
// //     void setData(int x, int y)
// //     {
// //         a = x;
// //         b = y;
// //     }

// //     // Friend function declaration
// //     friend void swapnum(Swap &s);
// // };

// // // Friend function definition
// // void swapnum(Swap &s)
// // {
// //     cout << "Before swapping: a = " << s.a << ", b = " << s.b << endl;
// //     int temp = s.a;
// //     s.a = s.b;
// //     s.b = temp;
// //     cout << "After swapping: a = " << s.a << ", b = " << s.b << endl;
// // }

// // int main()
// // {
// //     int p, q;
// //     cout << "Enter num1: ";
// //     cin >> p;
// //     cout << "Enter num2: ";
// //     cin >> q;

// //     Swap s;
// //     s.setData(p, q);
// //     swapnum(s); // Call the friend function to swap numbers
// //     return 0;
// // }

// //* method-2
// #include <iostream>
// using namespace std;

// class Swap
// {
//     int a, b, temp;
//     friend void swapnumb(void);

// public:
//     void setData(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     // void swapnum(void)
//     // {
//     //     cout << a << " " << b << endl;
//     //     temp = a;
//     //     a = b;
//     //     b = temp;
//     //     cout << a << " " << b << endl;
//     // }
// };
// void swapnumb(int p, int q)
// {
//     int temp = p;
//     p = q;
//     q = temp;
// }
// int main()
// {
//     int p, q;
//     cout << "Enter num1: ";
//     cin >> p;
//     cout << "Enter num2: ";
//     cin >> q;

//     cout << p << " " << q << endl;
//     swapnumb(4, 7);
//     cout << p << " " << q << endl;
//     // Swap s;
//     // s.setData(p, q);
//     // s.swapnum();

//     return 0;
// }