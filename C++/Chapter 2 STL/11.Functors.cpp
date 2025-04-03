#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    // Functions Objects or Functors are functions wrapped in a class so that it is available like an object
    int arr[] = {23, 2, 66, 34, 86, 45};
    
    // sort(arr, arr+6);    // sort
    
    sort(arr, arr+5, greater<int>());   // reverse-sort using functor greatere<int>()

    for (int i = 0; i < 6; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
    return 0;
}