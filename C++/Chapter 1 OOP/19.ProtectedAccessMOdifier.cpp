#include <iostream>
using namespace std;

class Base
{
protected:  // protected access modifier(PAM) is work like PrivateAM but it can be Inherited
    int a;
private:
    int b;
};

class Derived : protected Base
{
public:
    void print()
    {
        a=14;
        cout<<a<<endl;      // 'a' is accessible as it is made by Protected AM
        //cout<<b<<endl;    // 'b' is not accessible as it is made by Private AM
    }
};
/*
    Table               Public derivation  Private derivation   Protected derivation
 1.Private Members       Not Inherited      Not Inherited        Not Inherited
 2.Protected Members     Protected          Private              Protected
 3.Public Members        Public             Private              Protected
*/
int main()
{
    Derived d1;
    d1.print();

    return 0;
}
