#include <iostream>
using namespace std;
class c1;
class c2;
void exchange(c1 &obj1, c2 &obj2);

class c1
{
    int a;
    // Declare exchange as a friend
    friend void exchange(c1 &obj1, c2 &obj2);

public:
    void setData(int x) { a = x; }
    void getData() const { cout << a << " "; }
};

class c2
{
    int b;
    // Declare exchange as a friend
    friend void exchange(c1 &obj1, c2 &obj2);

public:
    void setData(int y) { b = y; }
    void getData() const { cout << b << endl; }
};

void exchange(c1 &obj1, c2 &obj2)
{
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.setData(5);
    o2.setData(7);

    cout << "Before exchange: ";
    o1.getData();
    o2.getData();

    exchange(o1, o2);

    cout << "After exchange: ";
    o1.getData();
    o2.getData();

    return 0;
}
