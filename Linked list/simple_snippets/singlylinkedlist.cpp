#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    // Node()
    // {
    //     key = 0;
    //     data = 0;
    //     next = NULL;
    // }
    // Node(int k, int d)
    // {
    //     key = k;
    //     data = d;
    // }
};

class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        head = NULL;
    }
    // SinglyLinkedList(Node *n)
    // {
    //     head = n;
    // }

    //1->Check if node exist using key value
    Node *nodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
                break;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    //2->Append a node to the list
    void appendNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value : " << n->key << " .Append another node with different key value" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->next = NULL;
                cout << "Node appended" << endl;
            }
        }
    }

    //3->Prepend node
    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value : " << n->key << " .Append another node with different key value" << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node prepended" << endl;
        }
    }

    //4->insert node after node with key value k
    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exist with key value :" << k << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value : " << n->key << " .Append another node with different key value" << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted" << endl;
            }
        }
    }

    //5->Delete node by unique value
    void deleteNodeByKey(int k)
    {
        if (head == NULL)
        {
            cout << "Singly linked list is empty" << endl;
        }
        else //if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "Node Unlinked with key value :" << k << endl;
            }
            else
            {
                Node *temp = NULL;
                Node *prevPtr = head;
                Node *currPtr = head->next;
                while (currPtr != NULL)
                {
                    if (currPtr->key == k)
                    {
                        temp = currPtr;
                        currPtr = NULL;
                    }
                    else
                    {
                        prevPtr = prevPtr->next;
                        currPtr = currPtr->next;
                    }
                }
                if (temp != NULL)
                {
                    prevPtr->next = temp->next;
                    cout << "Node Unlinked with key value :" << k << endl;
                }
                else
                {
                    cout << "Node doesn't exist with key value" << endl;
                }
            }
        }
    }

    //6->Update node
    void updateNodeByKey(int k, int d)
    {
        Node *ptr = nodeExists(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node data updated successfully" << endl;
        }
        else
        {
            cout << "Node doesn't exists with key value :" << k << endl;
        }
    }

    //7->Printing list
    void printList()
    {
        if (head == NULL)
        {
            cout << "No nodes in singly linked list" << endl;
        }
        else
        {
            cout << endl
                 << "Singly linked list values :";
            Node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ") --> ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\nWhat opertion do you want to perform? Select option number.Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. clear screen" << endl
             << endl;

        cin >> option;
        Node *n1 = new Node();
        // cout << n1->key << " " << n1->data << " " << n1->next << endl;

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Append Node operation \nEnter key & data of the node that to be appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            //cout<<n1.key<<" = "<<n1.data<<endl;
            break;

        case 2:
            cout << "Prepend node operation \nEnter key & data of the node to be prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert node after operation  \nEnter key of existing node after which you want to insert new node" << endl;
            cin >> k1;
            cout << "Enter key and data of the new node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;

            s.insertNodeAfter(k1, n1);
            break;

        case 4:
            cout << "Delete node by key operation - \nEnter key of the node to be deleted" << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;

        case 5:
            cout << "Update node by key operation - \nEnter key and new data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNodeByKey(key1, data1);
            break;

        case 6:
            s.printList();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "Enter proper option number" << endl;
            break;
        }
    } while (option != 0);
    return 0;
}