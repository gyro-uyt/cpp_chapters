#include <iostream>
using namespace std;

class Stack {
    int size;
    int top;
    int* arr;
  public:
    Stack(int size): size(size), top(-1), arr(new int[size]) {}
    ~Stack() {
        delete[] arr;
    }
    void printStack()const {
        int t = top;
        while(t != -1) {
            cout << arr[t--] << " ";
        }
        cout << "\n";
    }
    void push(int x) {
        if(top == size - 1) {
            cerr << "E: stack overflow!\n";
        }
        arr[++top] = x;
    }
    int pop() {
        if(top == -1) {
            cerr << "E: stack underflow!\n";
        }
        return arr[top--];
    }
    int peek(int depth) {
        if(top - depth < 0) {
            cerr << "E: peek beyond the stack boundary!\n";
            return -1;
        }
        return arr[top - depth];
    }
};
int main() {

    Stack s1(3);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.printStack();
    cout<<"Peek: "<<s1.peek(3)<<endl;

    return 0;
}