#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int capacity;
    int *arr;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[size];
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }
    int pop(void)
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(void)
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    void display(void)
    {
        if (top==-1)
        {
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        
        for (int i = top; i > -1; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int capacity, choice, value;
    cout << "Enter the size of the stack: ";
    cin >> capacity;

    Stack s1(capacity);

    while (1)
    {
        cout << "\nEnter your choice:" << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Peek" << endl
             << "4. Display" << endl
             << "5. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case (1):
            cout << "Enter the element: ";
            cin >> value;
            s1.push(value);
            break;

        case (2):
            cout << "Element popped: " << s1.pop() << endl;
            break;

        case (3):
            cout << "Element at top is: " << s1.peek() << endl;
            break;

        case (4):
            s1.display();
            break;

        default:
            return 0;
        }
    }

    return 0;
}