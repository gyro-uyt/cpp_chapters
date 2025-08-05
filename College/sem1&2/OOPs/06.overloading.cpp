#include <iostream>
using namespace std;

class New
{
    int m, n;

public:
    void setData()
    {
        cout << "Enter the values of num1 and num2:" << endl;
        cin >> m >> n;
    }
    void showData()
    {
        cout << "num1 = " << m << endl
             << "num2 = " << n << endl;
    }
    void operator--()
    {
        --m;
        --n;
    }
    void operator++()
    {
        ++m;
        ++n;
    }
};

int main()
{
    New n1;
    n1.setData();
    cout<<"\nold data"<<endl;
    n1.showData();

    cout<<"\ndecrement operator"<<endl;
    // n1.operator--();      // ---> othewise we had to write this long
    --n1;                   // ---> benifit of using 'operator' keyword
    n1.showData();
    
    cout<<"\nincrement operator"<<endl;
    ++n1;
    n1.showData();

    return 0;
}