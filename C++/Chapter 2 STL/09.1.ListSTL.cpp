// List is a bi-directional linear list which performs efficient inerstion/deletion operations
// if you want, fast access ---> use array
//              fast insertion/deletion ---> use list
#include <iostream>
#include <list>
using namespace std;

// method-1 of display, derived from method-0
void display1(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// method-2 of display
template <class T>
void display2(list<T> &L)
{
    for (int i : L)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // Initialisation of a list
    list<int> list1;    // empty list or List of 0-length
    list<int> list2(3); // (default list or pre-allocated list or list with placeholder elements) with size 3

    // pushing into List
    list1.push_back(23);
    list1.push_back(52);
    list1.push_back(1);
    list1.push_back(62);
    list1.push_back(15);
    list1.push_back(99);

    // pointing Iterator to list
    list<int>::iterator itr;
    itr = list1.begin();

    // printing list
    // method-0
    cout<<"list1: ";
    cout << *itr << " ";
    itr++;
    cout << *itr << " ";
    itr++;
    cout << *itr << " ";
    itr++;
    cout << *itr << " ";
    itr++;
    cout << *itr << " ";
    itr++;
    cout << *itr << endl;

    // method-1
    cout<<"list1: ";
    display1(list1);

    // popping(removing) elements from list
    list1.pop_front();  // removes 1-element from front
    list1.pop_back();   // removes 1-element from back
    // to remove element from center
    list1.remove(62);   // removes the first occurance of '62' from the list

    // method-2
    cout<<"pop & remove list1: ";
    display2(list1);

    /*
    Note:
    list1 was empty so we were pushing(adding) the elements in it, but
    list 2 has 5 pre-allocated elements which are not initialised yet, in case of <int> they're default values are 0
    so, we'll not be pushing elements but assigning the values
    */

    // method-0
    list<int>::iterator itr1;
    itr = list2.begin();
    *itr = 56;
    itr++;
    *itr = 34;
    itr++;
    *itr = 2;
    cout<<"list2: ";
    display1(list2);
    
    // sorting the list
    list2.sort();
    cout<<"Sort list2: ";
    display1(list2);

    // merging the list
    list1.merge(list2);
    cout<<"Merge list1 with list2: ";
    display1(list1);

    return 0;
}