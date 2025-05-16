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
    int insertion1(int arry[], int size, int capacity, int element, int index) {
        if (size>=capacity)
            return -1;
        
        
    }
};

int main() {

    Methods m;
    int arr1[100] = {9, 24, 5, 33};
    m.traversal(arr1, 4);


    return 0;
}