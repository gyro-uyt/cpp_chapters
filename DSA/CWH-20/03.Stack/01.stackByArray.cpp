/*
Stack
    Stack is a linear data structure
    Operations in stack are performed in LIFO (last in first out) order
    Insertion deletion happens from one end only

        |     |
        |  6  |
        |  5  |
        |  3  |     this is like the stack of plates stored one above other
        |_____|     last plate to come is the first one to go

    Top ptr in stack represents the element which will pop first or simply which as at the top of stack
    Pop()   => remove the topmost element from the stack
    Push()  => adds an element into the stack
    peek(index) => value at the given index from top is returned
    isEmpty() / isFull()    => determines whether the stack is empty or full
*/
#include <iostream>
using namespace std;

struct Stack {
    int size;
    int top;
    int* arr;
};
class Methods {
  public:
    int isEmpty(Stack* ptr) {
        // if(ptr->top == -1)
        //     return 1;
        // else
        //     return 0;
        return ptr->top == -1;
    }
    int isFull(Stack* ptr) {
        return ptr->top == ptr->size - 1;
    }
};

int main() {
    Stack *s1;
    s1->size = 80;
    s1->top = -1;
    // s1.arr = (int*) malloc(s1.size * sizeof(int));
    s1->arr = new int[s1->size];
    Methods m;

    // Pushing an element manually into the stack
    s1->arr[0]=69;
    s1->top++;

    if(m.isEmpty(s1))
        cout<<"Stack is empty\n";
    else    
        cout<<"Stack is not empty\n";
    
    return 0;
}