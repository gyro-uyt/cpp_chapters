#include <iostream>
using namespace std;

class LL {
    int data;
  public:
    LL* next;
    LL(int x): data(x), next(nullptr) {}
    void traversal(LL* head) const {
        while(head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};
int main() {

    LL* head = new LL(1);
    LL* first = new LL(11);
    LL* second = new LL(121);
    head->next = first;
    first->next = second;
    head->traversal(head);

    return 0;
}