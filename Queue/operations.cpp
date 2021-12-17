#include <iostream>
using namespace std;
#define n 20
class queue
{
    int *a;
    int front;
    int back;

public:
    queue()
    {
        a = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        a[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
        cout << "Front element popped" << endl;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return a[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }

    void Display()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        for (int i = front; i <= back; i++)
        {
            cout << *(a + i) << endl;
        }
    }
};

int main()
{
    queue q;
    int choice;
    do
    {
        cout << "1: Enqueue\n"
             << "2: Dequeue\n"
             << "3: Peek\n"
             << "4: IsEmpty\n"
             << "5: Display\n"
             << endl;
        cout << "Enter your choice number" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number to enqueue into queue" << endl;
            int x;
            cin >> x;
            q.enqueue(x);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            cout << "front element: " << q.peek() << endl;
            break;
        case 4:
            cout << q.empty() << endl;
            break;
        case 5:
            q.Display();
            break;

        default:
            cout << "enter a valid choice number" << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}