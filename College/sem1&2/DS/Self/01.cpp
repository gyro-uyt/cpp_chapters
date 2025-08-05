#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    int arr1[4] = {23, 67, 65, 86};
    cout << arr1[0] << " - " << arr1 << endl;
    cout << arr1[1] << " - " << arr1 + 1 << endl;
    cout << arr1[2] << " - " << arr1 + 2 << endl;
    cout << arr1[3] << " - " << arr1 + 3 << endl;
    cout << endl;
    // continuos block of memory

    Node n1, n2, n3, n4;
    n1.data = 12;
    n2.data = 34;
    n3.data = 43;
    n4.data = 76;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = nullptr;

    cout << n1.data << " - " << &n1.data << " - " << n1.next << " - " << &n1.next << endl;
    cout << n2.data << " - " << &n2.data << " - " << n2.next << " - " << &n2.next << endl;
    cout << n3.data << " - " << &n3.data << " - " << n3.next << " - " << &n3.next << endl;
    cout << n4.data << " - " << &n4.data << " - " << n4.next << " - " << &n4.next << endl;

    return 0;
}