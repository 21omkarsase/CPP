#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal = s2.top();
        cout << topVal << " is popped" << endl;
        s2.pop();
    }
    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return s2.top();
    }
    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    return 0;
}