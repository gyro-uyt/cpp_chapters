#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
        if(i == (vec.size() - 1)) {
            cout << endl;
        }
    }
    cout << endl;
}
void printVecPair(vector<pair<int, int>> &nums) {
    for(int i = 0; i < nums.size(); i++) {
        cout << "Pair " << i << ": " << nums[i].first << ", " << nums[i].second << endl;
        if(i == (nums.size() - 1)) {
            cout << endl;
        }
    }
}
void printVecItrBg(vector<int> &nums, vector<int>::iterator &itr) {
    for(int i = 0; i < nums.size(); i++) {
        cout << "*(itr+" << i << ") = " << *(itr + i) << endl;
        if(i == (nums.size() - 1)) {
            cout << endl;
        }
    }
}

int main() {
// Defining

    vector<int> vec1;
    vec1.push_back(3);
    vec1.push_back(2);
    vec1.push_back(1);
    vec1.push_back(6);
    vec1.push_back(7);
    vec1.push_back(8);
    vec1.emplace_back(4);   // not really usefull
    printVec(vec1);

    /*
    emplace (especially emplace_back) is a function provided by STL containers like vector, list, map, etc.
    It constructs elements in place,directly inside the container, which can be more efficient than push_back.

    Difference between push_back and emplace_back:
    push_back: Adds a copy (or move) of an existing object to the container.
    emplace_back: Constructs the object directly inside the container using provided arguments (no copy or move needed).

    This is especially useful when working with user-defined classes or complex objects.

    | Type                  | `push_back` vs `emplace_back`    |
    | --------------------- | -------------------------------- |
    | `int`, `char`, etc.   | No real difference — use either  |
    | `pair`, `class`, etc. | `emplace_back` is more efficient |

    emplace is mainly usefull for non-primitive data types only, for primitive data types it works same as push_back
    examples of non-primitve data types: pair, tuple, set, map, list,custom class-objects etc.

    ex: vector<pair<>> or list<pair<>>

    Instead of creating a pair and then pushing it:
    vector<pair<int, string>> v;
    v.push_back(make_pair(1, "one"));   // extra construction step

    You can write:
    v.emplace_back(1, "one"); // directly constructs the pair inside the vector

    📌 Why better? Skips the temporary pair creation → more efficient.
    */

    vector<pair<int, int>> vec2;
    vec2.push_back(make_pair(2, 3));    // slower, needs to make temperory pair
    vec2.push_back({7, 2});
    vec2.emplace_back(6, 9); // uses the constructor of pair<int, int> to directly create the element inside the vector
    vec2.emplace_back(3, 5);
    printVecPair(vec2);

    vector<int> v1(5);          // --> {0, 0, 0, 0, 0}          creates 5 instances of 0's
    vector<int> v2(5, 100);     // --> {20, 20, 20, 20, 20}     creates 5 instances of 20's
    vector<int> v3(v2);         // --> {20, 20, 20, 20, 20}     copies instances of v2

// Accessibility

    // vectors can aslo be normally accesed like the arrays
    cout << "vec1[0] = " << vec1[0] << endl;
    cout << "vec1[1] = " << vec1.at(1) << endl;     // at(index_num) can also be used to access vectors
    cout << "vec1[2] = " << vec1[2] << endl;
    cout << "vec1[3] = " << vec1[3] << endl << endl;

    // More Convinient way is if of the Iterators

    // .begin()
    vector<int>::iterator itr = vec1.begin();   // now, the iterator itr is pointing to the first element of the array
    printVecItrBg(vec1, itr); // because this is a pointer, so accessed like one

    // .end()
    vector<int>::iterator itr1 = vec1.end();    // NOTE: end() doesn't points to the last element, it points next to the right elements, so do remember to do itr1-- to access the last elements
    cout << *(itr1) << endl; // will access the next value after the last element(garbage value)
    itr1--;
    cout << *(itr1) << endl << endl; // now, accesses last element

    //.rend() & .rbegin --> NOTE: pointers move in reverse order (i.e., '++' will behave as '--' & '--' behaves as '++'), that's why "reverse_iterator" is used here
    vector<int>::reverse_iterator itr2 = vec1.rend();   // this points before the first element of the vector
    // auto itr2 = vec1.rend(); // --> this can aslo be used instead of above
    vector<int>::reverse_iterator itr3 = vec1.rbegin(); // this point to last element of the vector

    // .back()
    cout << vec1.back() << endl << endl; // last element of the vector

// Printing

    for(vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // auto --> automatically assigns the data types
    for(auto it = vec1.begin(); it < vec1.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // range based loop
    for(auto i : vec1) {       // here auto assigns integer not itereator
        cout << (i) << " ";
    }
    cout << endl << endl;

// Deletion

    vec1.erase(vec1.begin() + 1); // deletes the specific value at the given address
    printVec(vec1);

    // .erase(start, end)
    vec1.erase(vec1.begin() + 2, vec1.begin() + 4); // deletes all elements from the given Starting address to Ending address
    printVec(vec1);

// Insertion

    vector<int> vec3(2, 100);   // {100, 100}
    printVec(vec3);

    // Inserts single element at the begining of the vector
    vec3.insert(vec3.begin(), 20);  // {20, 100, 100}
    printVec(vec3);

    // Inserts 2 occurances of 5 after the beginging of the vector
    vec3.insert(vec3.begin() + 1, 2, 5);    // {20, 5, 5, 100, 100}
    printVec(vec3);

    // Inserts the specified part of the vector
    vec3.insert(vec3.begin() + 3, vec1.begin(), vec1.end() - 1); // {20, 5, 5, 3, 1, 8, 100, 100}
    printVec(vec3);

// Extras

    // .size() --> returns the number of elements in the vector
    cout << vec3.size() << endl;

    // .pop_back() --> removes the last element
    vec3.pop_back(); // {20, 5, 5, 3, 1, 8, 100}
    printVec(vec3);

    // .swap(vec_name) --> swaps the given vector with the specified vector --> their Names changes
    vec3.swap(vec1);
    printVec(vec3);

    // .clear() --> erases the entire vector
    vec3.clear();
    printVec(vec3);

    // .empty() --> returns 0(False), if vector is not empty else 1(true), vector is empty
    cout << vec3.empty() << endl;

    return 0;
}