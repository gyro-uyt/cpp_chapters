// Vector is a dynamic array, it manages it's size automatically
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int element, size;
    cout << "Enter the size of Vector" << endl;
    cin >> size;

    vector<int> vec1;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    // defining iterator 'itr'
    vector<int>::iterator itr;
    itr = vec1.begin(); // now itr points to vec1's begining

    // inserting elements in 'vec1' using 'itr'
    vec1.insert(itr, 69); // inserts element '69' at begining of vector
    display(vec1);

    vec1.insert(itr + 1, 75); // inserts element '75', 1 element after where itr points
    display(vec1);

    vec1.insert(itr + 3, 10, 23); // displays element '23' 10x times at position 3rd from where 'itr' points
    display(vec1);

    // to print we have following options
    cout << vec1[0] << endl;
    cout << vec1.at(0) << endl;

    return 0;
}