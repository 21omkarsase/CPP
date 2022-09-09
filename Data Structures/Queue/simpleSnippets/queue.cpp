#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            arr[++rear] = val;
        }
    }

    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }

    int count()
    {
        return rear - front + 1;
    }

    void display()
    {
        cout << "All values in the queue are : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int option, value;
    Queue q;
    do
    {
        cout << "\n\nWhat operation do you want to perform? Select option number.Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. clear screnn" << endl
             << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue operation  \nEnter an item to enqueue in the queue" << endl;
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            cout << "Dequeue operation  \nDequeued value : " << q.dequeue() << endl;
            break;
        case 3:
            if (q.isEmpty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Queue is not empty" << endl;
            }
            break;
        case 4:
            if (q.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "Queue is not full" << endl;
            }
            break;
        case 5:
            cout << "Count operation \nCount of items in queue : " << q.count() << endl;
            break;
        case 6:
            cout << "Display function called -" << endl;
            q.display();
            break;
        case 7:
            system("cls");
            break;

        default:
            cout << "Enter a proper option number" << endl;
            break;
        }
    } while (option != 0);

    return 0;
}