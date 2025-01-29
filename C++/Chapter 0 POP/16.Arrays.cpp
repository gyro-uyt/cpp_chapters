//*********** ARRAYS **********//
#include <iostream>
using namespace std;

int main(){
    // '[]' makes an ARRAY, in [] it is optional to write no.of elements,
    int marks[] = {23, 45, 65, 75};     // here marks[4] can all so be used
    //** in C++ counting Starts from ZERO **/
    cout<< marks[0] <<endl;     // The first element (index 0) is assigned the value 23.
    cout<< marks[1] <<endl;     // The second element (index 1) is assigned the value 45.
    cout<< marks[2] <<endl;
    cout<< marks[3] <<endl;
    cout<<endl;

    cout<<"These are Printed using 'for' Loops and Arrays"<<endl;
    for (int i = 0; i < 4; i++)
    {
       cout<< marks[i] <<endl; /* code */
    }
    cout<<endl;

    cout<<"These are Printed using 'while' Loops and Arrays"<<endl;
    int m=0;
    while (m<4)
    {
       cout<< marks[m] <<endl; /* code */
       m++;
    }
    cout<<endl;

    cout<<"These are Printed using 'do-while' Loops and Arrays"<<endl;
    int p=0;
    do
    {
        cout<< marks[p] <<endl;        /* code */
        p++;
    } while (p<4);
    cout<<endl;

    int phymarks[5];     // Initialisation of Arrays can also be done like this or,
    phymarks[0]=25;     // int phymarks[5]={25, 43, 465, 92, 7566}; or,
    phymarks[1]=43;    // int phymarks[]={25, 43, 465, 92, 7566};
    phymarks[2]=465;
    phymarks[3]=92;
    phymarks[4]=7566;

    cout<<"These are Phy marks"<<endl;
    cout<< phymarks[0]<<endl;
    cout<< phymarks[1]<<endl;
    cout<< phymarks[2]<<endl;
    cout<< phymarks[3]<<endl;
    phymarks[4]=0;                  // values can also be changed
    cout<< phymarks[4]<<endl;
    return 0;
}