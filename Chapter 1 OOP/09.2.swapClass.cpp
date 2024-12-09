#include <iostream>
using namespace std;
class c1;
class c2;
void exchange(int *p, int *q);

class c1
{
    int a;
    friend void exchange(c1 &p, c2 &q);

public:
    void setData(int x) { a = x; }
    void getData(void) { cout << a << " "; }
};
class c2
{
    int b;
    friend void exchange(c1 &p, c2 &q);

public:
    void setData(int y) { b = y; }
    void getData(void) { cout << b << " "; }
};

// void exchange(int &p, int &q)
void exchange(c1 &p, c2 &q)
{
    int temp = p.a;
    p.a = q.b;
    q.b = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.setData(5);
    o2.setData(7);

    // before
    o1.getData();
    o2.getData();

    exchange(o1, o2);
    // after
    o1.getData();
    o2.getData();

    return 0;
}