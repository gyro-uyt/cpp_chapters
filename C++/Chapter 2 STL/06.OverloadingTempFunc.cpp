#include <iostream>
using namespace std;

void greet(int g)
{
    cout<<"Number entered by the user: "<<g<<endl;
}

template <class T>
void greet(T t)
{
    cout<<"template class number = "<<t<<endl;
}

template <class Y>
void Hello(Y gg)
{
    cout<<"Hello dear"<<endl;
}

int main()
{
    // Exact match takes the Highest Priority
    greet(7);
    greet<>(7);
    
    // Exact match takes the Highest Priority
    Hello('P');

    return 0;
}