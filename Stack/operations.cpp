#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
private:
    int *a;
    int top;

public:
    Stack()
    {
        a = new int[n];
        top = -1;
    }
    void Push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            a[top] = x;
        }
    }
    void Pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
        }
        else
        {
            int temp = a[top];
            top--;
            cout << "Popped element: " << temp << endl;
        }
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in Stack" << endl;
            return -1;
        }
        else
        {
            return a[top];
        }
    }

    bool IsEmpty()
    {
        return top == -1;
    }
    void Display()
    {
        if (top == -1)
        {
            cout << "No element in Stack" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << *(a + i) << endl;
            }
        }
    }
};

int main()
{
    Stack st;
    int choice;
    do
    {
        cout << "1: Push\n"
             << "2: Pop\n"
             << "3: Top\n"
             << "4: IsEmpty\n"
             << "5: Display\n"
             << endl;
        cout << "Enter your choice number" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number to push into stack" << endl;
            int x;
            cin >> x;
            st.Push(x);
            break;
        case 2:
            st.Pop();
            break;
        case 3:
            cout << "Top element: " << st.Top() << endl;
            break;
        case 4:
            cout << st.IsEmpty() << endl;
            break;
        case 5:
            st.Display();
            break;

        default:
            cout << "enter a valid choice number" << endl;
            break;
        }
    } while (choice >= 1 && choice <= 5);
    return 0;
}
