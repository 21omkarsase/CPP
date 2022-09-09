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

class Stack
{
public:
    Node *top;

    Stack()
    {
        top = NULL;
    }

    // 1.check if node exist
    bool checkIfNodeExist(Node *n)
    {
        Node *temp = top;
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
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // 3.Push()
    void Push(Node *n)
    {
        if (top == NULL)
        {
            top = n;
        }
        else if (checkIfNodeExist(n))
        {
            cout << "Node already exists with key value : " << n->key << endl;
            cout << "Enter node of different key value" << endl;
        }
        else
        {
            Node *temp = top;
            top = n;
            n->next = temp;
            cout << "Node Pushed successfully into the stack" << endl;
        }
    }
    // 4.Pop()
    Node *Pop()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return temp;
        }
        else
        {
            temp = top;
            top = top->next;
            return temp;
        }
    }

    // 5.Peek()
    Node *Peek()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return temp;
        }
        else
        {
            return top;
        }
    }

    // 6.count()
    int count()
    {
        int count = 0;
        Node *temp = top;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // 7.display()
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "All values in the stack are : " << endl;
            Node *temp = top;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ")"
                     << "->" << endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    Stack s1;
    int option, key, data;

    do
    {
        cout << "What operation do you want to perfoem"
             << "Select option number.Enter 0 to exit." << endl;
        cout << "1.Push()" << endl;
        cout << "2.Pop()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.Peek()" << endl;
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
            cout << "Enter key and value of node to Push in the stack" << endl;
            cin >> key;
            cin >> data;
            node->key = key;
            node->data = data;
            s1.Push(node);
            break;
        case 2:
            node = s1.Pop();
            cout << "Pop function called - Popped value : " << node->data << endl;
            delete node;
            cout << endl;
            break;
        case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack is not empty" << endl;
            }
            cout << endl;
            break;
        case 4:
            if (s1.isEmpty())
            {
                cout << "Stack is  empty" << endl;
            }
            else
            {
                cout << "Peek function called : " << endl;
                node = s1.Peek();
                cout << "Top of stack is : (" << node->key << "," << node->data << ")" << endl;
            }
            cout << endl;
            break;
        case 5:
            cout << "Count function called : " << endl;
            cout << "No of nodes in the stack : " << s1.count() << endl;
            cout << endl;
            break;
        case 6:
            cout << "Display function called : " << endl;
            s1.display();
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
