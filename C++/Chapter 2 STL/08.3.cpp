#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &V)
{
    for(int i : V)
    {
        cout << i <<" ";
    }
    cout<<endl;
}

int main()
{
    // ways to create a Vector
    vector<int> vec1; // zero length integer vector
    vector<char> vec2(5);   // 5-elements character vector
    vector<char> vec3(vec2);    // 5-elements character vector from 'vec2'
    
    vector<int> vec4(6, 3); // 6 elements vector of 3s (makes 6 elements, all of which are 3)
    display(vec4);

    // size of vector
    cout<< vec4.size()<<endl;


    return 0;
}