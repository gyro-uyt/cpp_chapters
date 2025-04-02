#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Aura
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    Aura(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void showData()
    {
        cout << "data1 = " << data1 << endl
             << "data2 = " << data2 << endl
             << "data3 = " << data3 << endl;
    }
};

int main()
{
    Aura<> a1(23, 4.22, 'j');
    a1.showData();
    cout<<endl;

    Aura<> a2('c', 54.3, 'k');  // Output: data1 = 99 bcz. ascii value of 'c' is 99
    a2.showData();

    return 0;
}