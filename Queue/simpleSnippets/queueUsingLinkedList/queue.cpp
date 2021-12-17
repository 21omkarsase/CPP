#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;

    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // 1.check if node exist
    bool checkIfNodeExist(Node *n)
    {
        Node *temp = front;
        while (temp != NULL)
        {
            if (temp->key == n->key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // 2.isEmpty()
    bool isEmpty()
    {
        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // 3.Enqueue()
    void Enqueue(Node *n)
    {
        if (isEmpty())
        {
            front = n;
            rear = n;
            cout << "Node enqueued successfully" << endl;
        }
        else if (checkIfNodeExist(n))
        {
            cout << "Node already exists with key value : " << n->key << endl;
            cout << "Try with different key value" << endl;
        }
        else
        {
            rear->next = n;
            rear = n;
            cout << "Node enqueued successfully" << endl;
        }
    }
    // 4.Dequeue()
    Node *Dequeue()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "queue underflow" << endl;
            return temp;
        }
        else
        {
            Node *temp = front;
            if (front == rear)
            {
                temp = front;
                front = NULL;
                rear = NULL;
                return temp;
            }
            else
            {
                temp = front;
                front = front->next;
                return temp;
            }
        }
    }

    // 5.Front()
    Node *Front()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return NULL;
        }
        else
        {
            return front;
        }
    }

    // 6.count()
    int count()
    {
        int eleCount = 0;
        Node *temp = front;
        while (temp != NULL)
        {
            eleCount++;
            temp = temp->next;
        }
        return eleCount;
    }

    // 7.display()
    void display()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return;
        }
        else
        {
            cout << "All values in the queue are : " << endl;
            Node *temp = front;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ")"
                     << "->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Queue q;
    int option, key, data;

    do
    {
        cout << "What operation do you want to perfoem"
             << "Select option number.Enter 0 to exit." << endl;
        cout << "1.Enqueue()" << endl;
        cout << "2.Dequeue()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.Front()" << endl;
        cout << "5.count()" << endl;
        cout << "6.display()" << endl;
        cout << "7.Clear screen" << endl;
        cin >> option;

        Node *node = new Node();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue function called -" << endl;
            cout << "Enter key and value of node to Enqueue in the Queue" << endl;
            cin >> key;
            cin >> data;
            node->key = key;
            node->data = data;
            q.Enqueue(node);
            break;
        case 2:
            node = q.Dequeue();
            cout << "Dequeue function called - " << endl;
            cout << "Dequeueped value : " << node->data << endl;
            delete node;
            cout << endl;
            break;
        case 3:
            cout << "isEmpty function called - " << endl;
            if (q.isEmpty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Queue is not empty" << endl;
            }
            cout << endl;
            break;
        case 4:
            if (q.isEmpty())
            {
                cout << "Queue is  empty" << endl;
            }
            else
            {
                cout << "Front function called : " << endl;
                node = q.Front();
                cout << "Front of Queue is : (" << node->key << "," << node->data << ")" << endl;
            }
            cout << endl;
            break;
        case 5:
            cout << "Count function called : " << endl;
            cout << "No of nodes in the Queue : " << q.count() << endl;
            cout << endl;
            break;
        case 6:
            cout << "Display function called : " << endl;
            q.display();
            cout << endl;
            break;
        case 7:
            system("cls");
            break;

        default:
            cout << "Enter proper option number" << endl;
            cout << endl;
            break;
        }
    } while (option != 0);

    return 0;
}
