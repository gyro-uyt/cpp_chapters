#include <iostream> 
using namespace std;

class Complex
{
    int real, iota;
public:
    void setData(int a, int b)
    {
        real = a;
        iota = b;
    }
    void getData(void)
    {
        cout<<"Real part is "<<real<<endl;
        cout<<"Imaginary part is "<<iota<<endl;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1; // ptr is pointer of Complex type as it points a object which is of Complex type
    
    /*  
        c1.setData(2,56);
        or
        (*ptr).setData(2, 56);
        or 
    */
    ptr->setData(2, 56);    // Arrow Operator
    // -> means de-reference ptr and it also eliminates the use of Dot operator
    c1.getData();
    cout<< ptr <<endl;
    cout<<endl;

    Complex *ptr1 = new Complex;
    ptr1->setData(23,4);
    ptr1->getData();
    cout<<endl;

    // Array of Objects
    Complex *ptr2 = new Complex[3];
    ptr2->setData(2,4);
    ptr2->getData();
    (ptr2+1)->setData(4,6);
    (ptr2+1)->getData();

    delete ptr1;
    delete[] ptr2;
    return 0;
}

