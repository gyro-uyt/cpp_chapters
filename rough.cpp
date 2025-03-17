#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, capacity;
    int *arr;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int value)
    {
        if (rear == capacity - 1)
        {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
            return;
        }
        if (front == -1)
            front = 0; // Set front when first element is inserted
        arr[++rear] = value;
        cout << value << " enqueued into queue." << endl;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow! No elements to dequeue." << endl;
            return;
        }
        cout << "Element dequeued: " << arr[front++] << endl;

        if (front > rear) // Reset queue when all elements are dequeued
        {
            front = -1;
            rear = -1;
        }
    }

    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int capacity, choice, value;
    cout << "Enter the size of the queue: ";
    cin >> capacity;

    Queue q(capacity);

    while (true)
    {
        cout << "\nEnter your choice:\n"
             << "1. Enqueue\n"
             << "2. Dequeue\n"
             << "3. Peek\n"
             << "4. Display\n"
             << "5. Exit\n"
             << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice! Please enter a valid option.\n";
        }
    }

    return 0;
}
