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

class CircularLinkedList
{
public:
    Node *head;
    CircularLinkedList()
    {
        head = NULL;
    }
    CircularLinkedList(Node *n)
    {
        head = n;
    }

    //1->check node exists or not
    Node *nodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        if (ptr == NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if (ptr->key == k)
                {
                    temp = ptr;
                    break;
                }
                ptr = ptr->next;
            } while (ptr != head);
            return temp;
        }
    }

    //2->append node
    void appendNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value :" << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                n->next = head;
                cout << "Node appended as head node" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->next = head;
                cout << "Node appended" << endl;
            }
        }
    }

    //3.prepend node
    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value :" << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                n->next = head;
                cout << "Node appended as head node" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->next = head;
                head = n;
                cout << "Node prepended" << endl;
            }
        }
    }

    //4->insert node in between
    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists of key value :" << k << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value :" << n->key << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted at the end" << endl;
            }
        }
    }

    //5->deleting(unlinking) the node
    void deleteNodeByKey(int k)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists of key value :" << k << endl;
        }
        else
        {
            if (ptr == head)
            {
                if (ptr->next == head)
                {
                    head = NULL;
                    cout << "Head node unlinked" << endl;
                }
                else
                {
                    Node *temp = head->next;
                    while (temp->next != head)
                    {
                        temp = temp->next;
                    }
                    temp->next = head->next;
                    head = head->next;
                    cout << "Node unlinked" << endl;
                }
            }
            else
            {
                Node *prevNode = head;
                Node *currNode = head->next;
                while (currNode->key != ptr->key)
                {
                    prevNode = prevNode->next;
                    currNode = currNode->next;
                }
                if (currNode->next == head)
                {
                    prevNode->next = currNode->next;
                    cout << "Last node unlinked" << endl;
                }
                else
                {
                    prevNode->next = currNode->next;
                    cout << "Node unlinked" << endl;
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
            cout << "No nodes in circular linked list" << endl;
        }
        else
        {
            cout << endl
                 << "circular linked list values :";
            Node *temp = head;
            do
            {
                cout << "(" << temp->key << "," << temp->data << ") --> ";
                temp = temp->next;
            } while (temp != head);
        }
    }
};

int main()
{
    CircularLinkedList s;
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
