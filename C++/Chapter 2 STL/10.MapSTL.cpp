// Map is an associative array
#include <iostream>
#include <map>
#include <string>
using namespace std;

// learn more methods from cppreference.com or cplusplus.com
int main()
{
    // Initialisation
    map<string, int> marksMap;

    // assigning key-value
    marksMap["Pratham"] = 17;
    marksMap["Sumit"] = 19;
    marksMap["Uday"] = 14;
    marksMap.insert({{"Shivam", 0}, {"Arunya", 20}, {"Abhay", 15}});

    // printing
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
        // .first is Key(first value) & .second is ring(assigning value of first)
    }

    // gives the size of marksMap
    cout << "Size: " << marksMap.size() << endl;

    // give the maximum posssible size of a Map
    cout << "max-size: " << marksMap.max_size() << endl;

    // Check wether the Map is empty(1) or not(0)
    cout << "Empty's return value: " << marksMap.empty() << endl;

    return 0;
}