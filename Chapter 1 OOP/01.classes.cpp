//* Structures Vs Classes
//  i) No Data Hiding/Privacy
// ii) Can't use Functions in Strucutres
// in structures typdef can be omited, it is already in-built

#include <iostream>
using namespace std;

class Employee
{               // 'public' and 'private' are Two Specifiers of 'class'
    private:
        int a,b,c;
    public:
        int d,e;

    void setData(int a1, int b1, int c1);       // Declaration, now u can define the function anywhere in the coder
    void getData();
};      
//* class Ends with semi-colan( ; )

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Pratham;
    // Pratham.a = 169;     ---> This will Throw ERROR as 'a' is Private
    Pratham.d = 59;
    Pratham.e = 89;
    Pratham.setData(3,5,8);     
    Pratham.getData();
    
    return 0;
}

void Employee :: getData(){
    cout<<"The value of 'a' is: "<< a <<endl;
    cout<<"The value of 'b' is: "<< b <<endl;
    cout<<"The value of 'c' is: "<< c <<endl;
    cout<<"The value of 'd' is: "<< d <<endl;
    cout<<"The value of 'e' is: "<< e <<endl;
}
