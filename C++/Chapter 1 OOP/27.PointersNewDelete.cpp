#include <iostream>
using namespace std;

int main()
{
    int a = 69;
    int *ptr = &a;
    cout<< a <<endl;    // value of 'a'
    cout<< &a <<endl;   // address of 'a'
    cout<< ptr <<endl;  // stores address of 'a'
    cout<< &ptr <<endl; // address of 'ptr'
    cout<< *(ptr) <<endl; // value stored at address 'ptr', de-reference pointer
    cout<<endl;

    // new operator
    int *p = new int(4);
    cout<< p <<endl;
    cout<< *(p) <<endl;
    delete p;
    cout<<endl;

    int *arr = new int[4];
    arr[0]=13;
    arr[1]=45;
    *(arr+2)=73;    // we can also initialise like this
    arr[3]=56;
    // delete[] arr;    // freeing the memory here will give garbage values for following outputs
    cout<<"Value at arr[0] = "<<arr[0]<<endl;
    cout<<"Value at arr[1] = "<<arr[1]<<endl;
    cout<<"Value at arr[2] = "<<arr[2]<<endl;
    cout<<"Value at arr[3] = "<<arr[3]<<endl;

    // delete operator
    delete[] arr;   // frees the memory allocated to arr[]

    return 0;
}
