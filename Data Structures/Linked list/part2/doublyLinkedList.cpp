#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;
    Node *prev;

    // Node()
    // {
    //     key = 0;
    //     data = 0;
    //     next = NULL;
    //     prev = NULL;
    // }
    // Node(int k, int d)
    // {
    //     key = k;
    //     data = d;
    // }
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    DoublyLinkedList(Node *n)
    {
        head = n;
    }

    //1->check if node exists using key value
    Node *checkIfNodeExists(int k)
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

    //2->append a node
    void appendNode(Node *n)
    {
        if (checkIfNodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value :" << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended as head node" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->prev = ptr;
                cout << "Node appended" << endl;
            }
        }
    }

    //3->prepend a node
    void prependNode(Node *n)
    {
        if (checkIfNodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value :" << n->key << endl;
        }

        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node prepended()" << endl;
            }
            else
            {
                head->prev = n;
                n->next = head;

                head = n;
                cout << "Node prepended" << endl;
            }
        }
    }

    //4->insert node after a particular node in the list with key value k
    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists with key value :" << k << endl;
        }
        else
        {
            if (checkIfNodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value :" << n->key << endl;
            }
            else
            {
                if (ptr->next == NULL)
                {
                    //inserting at end
                    ptr->next = n;
                    n->prev = ptr;
                    cout << "Node inserted at the end" << endl;
                }
                else
                {
                    //inserting in between
                    n->next = ptr->next;
                    n->prev = ptr;
                    ptr->next->prev = n;
                    ptr->next = n;
                    cout << "Node inserted in between" << endl;
                }
            }
        }
    }

    //5->delete(unlink) the node by using unique key
    void deleteNodeByKey(int k)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists with key value :" << k << endl;
        }
        else
        {
            if (head->key == k)
            {
                head = ptr->next;
                cout << "Node unlinked of key value :" << k << endl;
            }
            else if (ptr->next == NULL)
            {
                ptr->prev->next = NULL;
                cout << "Node unlinked of key value :" << k << endl;
            }
            else
            {
                ptr->prev->next = ptr->next;
                ptr->next->prev = ptr->prev;
                cout << "Node unlinked of key value :" << k << endl;
            }
        }
    }

    //6->update a node
    void updateNodeByKey(int k, int d)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout << "Node doesn't exists with key value :" << k << endl;
        }
        else
        {
            ptr->data = d;
            cout << "Node data updated successfully" << endl;
        }
    }

    //7->printing list
    void printList()
    {
        if (head == NULL)
        {
            cout << "Doubly linked list is empty" << endl;
        }
        else
        {
            cout << "Doubly linked list values : ";
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout << " (" << ptr->key << "," << ptr->data << ") <-->";
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    DoublyLinkedList s;
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