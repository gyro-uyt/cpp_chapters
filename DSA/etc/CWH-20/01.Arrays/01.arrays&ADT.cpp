/*
ADT(Abstract Data Type) --> hiding details(implementations)
    ADTs = set of values + set of operations

Array:
    collection of elements accessible by an index
    contigious memory of block
    fixed allocated memory, Cannot be re-sized

    Fast Access, O(1) i.e., in constant time, hence get() & set() method are super fast
    Insertion & Deletion method are very slow

Operations on Array

    Traversal
        visiting each element of the array exactly once to perform an operation
    Insertion
        process of adding a new element into the array at a specific position
    Deletion
        removing an element from a specific position in the array
    Searching
        finding the index of a specific element in the array
*/
#include <iostream>

class MyArray {
  private:
    int total_size;
    int used_size;
    int* ptr;

  public:
    // Constructor
    MyArray(int tSize, int uSize) {
        total_size = tSize;
        used_size = uSize;
        ptr = new int[total_size];
    }

    // Destructor
    ~MyArray() {
        delete[] ptr;
    }

    // Set values
    void setVal() {
        int n;
        for(int i = 0; i < used_size; i++) {
            std::cout << "Enter element " << i << ": ";
            std::cin >> n;
            ptr[i] = n;
        }
    }

    // Show values
    void show() const {
        for(int i = 0; i < used_size; i++) {
            std::cout << ptr[i] << std::endl;
        }
    }
};

int main() {
    MyArray marks(10, 2);

    std::cout << "We are running setVal now" << std::endl;
    marks.setVal();

    std::cout << "We are running show now" << std::endl;
    marks.show();

    return 0;
}
