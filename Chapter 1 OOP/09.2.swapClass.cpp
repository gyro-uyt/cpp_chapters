#include <iostream>
using namespace std;


void exchange(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
class c1
{
    int a;
    friend void exchange(int *, int *);
    friend void ::exchange(int *, int *);

public:
    void setData(int x)
    {
        a = x;
    }
    void getData(void)
    {
        cout << a << " ";
    }
};
class c2
{
    int b;
    friend void exchange(int *, int *);

public:
    void setData(int y)
    {
        b = y;
    }
    void getData(void)
    {
        cout << b << endl;
    }
};

int main()
{
    c1 o1;
    c2 o2;
    o1.setData(5);
    o1.getData();
    o2.setData(7);
    o2.getData();
    exchange(&o1.a, &o2.b);
    return 0;
}