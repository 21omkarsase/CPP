#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void inserAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
// void deleteAtHead(node *head)
// {
//     node *todelete = head;
//     head = head->next;

//     delete todelete;
// }
void deletion(node *head, int val)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    // if (head->next == NULL)
    // {
    //     deleteAtHead(head);
    //     return;
    // }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << endl;
}
void reverseDisplay(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << " <-- " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
node *reverse(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}
int main()
{
    node *head = NULL;
    inserAtTail(head, 1);
    inserAtTail(head, 2);
    inserAtTail(head, 3);
    inserAtTail(head, 5);
    inserAtTail(head, 6);
    inserAtTail(head, 7);
    inserAtTail(head, 8);
    inserAtTail(head, 9);
    display(head);
    deletion(head, 3);
    display(head);
    // deleteAtHead(head);
    display(head);
    reverseDisplay(reverse(head));
    return 0;
}