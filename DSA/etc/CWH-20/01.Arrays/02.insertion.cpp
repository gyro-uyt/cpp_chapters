#include <iostream>
using namespace std;

class Methods {
  public:
    void traversal(int arry[], int n) {
        for(int i = 0; i < n; i++) {
            cout << arry[i] << " ";
        }
        cout << endl;
    }
    int indexInsertion(int arry[], int size, int capacity, int element, int index) {
        if(size >= capacity)
            return 0;

        for(int i = size; i > index; i--) {
            arry[i] = arry[i - 1];
        }
        arry[index] = element;
        return 1;
    }
    int indexDeletion(int arry[], int size, int index) {

        for(int i = index; i < size-1; i++) {
            arry[i]=arry[i+1];
        }
        return 1;
    }
};

int main() {

    Methods m;
    int arr1[100] = {7, 8, 12, 27, 88};
    int size = 5, capacity = 100;
    int index = 3, element = 69;
    m.traversal(arr1, size);
    if(m.indexInsertion(arr1, size, capacity, element, index)) {
        cout << "Insertion successful\n";
        size++;
        m.traversal(arr1, size);
    } else
        cout << "E: Insertion failed\n";

    m.indexDeletion(arr1, size, 1);
    size--;
    m.traversal(arr1, size);
    return 0;
}