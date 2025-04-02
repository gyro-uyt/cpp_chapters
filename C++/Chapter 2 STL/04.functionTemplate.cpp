// Function Templates & Function Templates with Parameters
#include <iostream>
using namespace std;

float intAvg(int x, int y)
{
    float z = (x + y) / 2;
    return z;
}
float floatAvg(float x, float y)
{
    float z = (x + y) / 2;
    return z;
}
float doubleAvg(double x, double y)
{
    float z = (x + y) / 2;
    return z;
}

// instead of making so many same functions we can use templates to define just one function for all these functions
template <class T1, class T2>
float Avg(T1 x, T2 y)
{
    float z = (x + y) / 2;
    return z;
}

template <class T>
void swaap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    cout << intAvg(3, 7) << endl;
    cout << floatAvg(34.2, 56.5) << endl;
    cout << doubleAvg(2232, 3729) << endl;

    cout << Avg(23, 99.2) << endl;

    int p = 2, q = 34;
    swaap(p, q);
    cout << p << endl
         << q << endl;
    
    return 0;
}