#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    int itemCount = 0;
    CircularQueue()
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
        if ((rear + 1) % 5 == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enCircularqueue(int val)
    {
        if (isFull())
        {
            cout << "CircularQueue is full" << endl;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
            itemCount++;
        }
        else
        {
            rear = (rear + 1) % 5;
            arr[rear] = val;
            itemCount++;
        }
    }

    int deCircularqueue()
    {
        int x;
        if (isEmpty())
        {
            cout << "CircularQueue is empty" << endl;
            return -1;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
            itemCount--;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            itemCount--;
            return x;
        }
        cout << "\nfront : " << arr[front] << " rear : " << arr[rear] << endl;
    }

    int count()
    {
        return itemCount;
    }

    void display()
    {
        cout << "All values in the Circularqueue are : " << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        2

            cout
            << "\nfront : " << arr[front] << " rear : " << arr[rear] << endl;
        cout << endl;
    }
};

int main()
{
    int option, value;
    CircularQueue q;
    do
    {
        cout << "\n\nWhat operation do you want to perform? Select option number.Enter 0 to exit." << endl;
        cout << "1. EnCircularqueue()" << endl;
        cout << "2. DeCircularqueue()" << endl;
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
            cout << "EnCircularqueue operation  \nEnter an item to enCircularqueue in the Circularqueue" << endl;
            cin >> value;
            q.enCircularqueue(value);
            break;
        case 2:
            cout << "DeCircularqueue operation  \nDeCircularqueued value : " << q.deCircularqueue() << endl;
            break;
        case 3:
            if (q.isEmpty())
            {
                cout << "CircularQueue is empty" << endl;
            }
            else
            {
                cout << "CircularQueue is not empty" << endl;
            }
            break;
        case 4:
            if (q.isFull())
            {
                cout << "CircularQueue is full" << endl;
            }
            else
            {
                cout << "CircularQueue is not full" << endl;
            }
            break;
        case 5:
            cout << "Count operation \nCount of items in Circularqueue : " << q.count() << endl;
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