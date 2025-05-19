#include <iostream>
using namespace std;

struct stack {
    int size;
    int top;
    int* arr;

    stack(int size): size(size), top(-1), arr(new int[size]) {}
    ~stack() {
        delete[] arr;
    }

    int isEmpty() {
        return top == -1;
    }
    int isFull() {
        return top == size - 1;
    }
};

class Stack {
  private:
    int size;
    int top;
    int* arr;
  public:
    Stack(int size): size(size), top(-1), arr(new int[size]) {}
    ~Stack() {
        delete[] arr;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == size - 1;
    }
    void push(int x) {
        if(isFull()) {
            cerr << "E: stack overflow! Element " << x << " cannot be pushed.\n";
            return;
        }
        arr[++top] = x;
    }
    int pop() {
        if(isEmpty()) {
            cerr << "E: stack underflow!\n";
            return -1;
        }
        return arr[top--];
    }
    void traversal() const {    // using const keyword bcz. it tells the compiler that this function will not modify any member variables of the object. It’s a promise that the method is “read-only.”
        int topp = top;
        while(topp != -1) {
            cout << arr[topp--] << " ";
        }
        cout << endl;
    }
};
// struct and class both can be used to implement the stack
int main() {

    Stack s1(5);
    s1.push(1);
    s1.push(4);
    s1.push(8);
    s1.push(12);
    s1.traversal();
    cout << "Popped: " << s1.pop() << endl;
    s1.traversal();

    return 0;
}