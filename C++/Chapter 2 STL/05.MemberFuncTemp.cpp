// Member Function Templates 
#include <iostream>
using namespace std;

template <class T>
class Hello
{
    T data1;
public:
    Hello(T x)
    {
        data1 = x;
    }
    void display();
};

template <class Tx>
void Hello<Tx>::display()
{
    cout<<data1<<endl;
}

int main()
{   
    Hello<char> h1('S');
    h1.display();

    return 0;
}