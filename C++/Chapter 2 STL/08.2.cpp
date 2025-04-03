#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
void show(vector<T> &objV)
{
    // for vectors special Print syntax
    for (T i : objV)
    {
        cout << i <<" ";
    }
    cout<<endl;
}

int main()
{
    // vector objV1={23,34,21,43,2,45,15}; // implicit declaration
    vector<int> objV1 = {23, 34, 21, 43, 2, 45, 15}; // explicit is preferred
    vector<char> objV2 = {'s', 'g', 'd', 't'};
    
    cout << "Size of the vector<int> objV1 = " << objV1.size() << endl;
    show(objV1);
    
    // push_back ---> Adds an element at last
    objV1.push_back(34);
    objV1.push_back(28);
    show(objV1);

    // pop_back ---> Removes an element from last
    objV1.pop_back();
    show(objV1);

    show(objV2);

    return 0;
}