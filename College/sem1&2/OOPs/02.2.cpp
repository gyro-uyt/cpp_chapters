#include <iostream>
using namespace std;

class Math
{
public:
    void area(int x)
    {
        cout << "Area of circle is " << x * x << "pi " << endl;
    }
    void area(int x, int y)
    {
        cout << "Area of the rectangle is " << x * y << endl;
    }
    void area(int x, int y, int z)
    {
        cout << "Volume of the cuboid is " << x * y * z << endl;
    }
};

int main()
{
    Math s1;
    s1.area(5);
    s1.area(5, 2);
    s1.area(5, 2, 10);

    return 0;
}