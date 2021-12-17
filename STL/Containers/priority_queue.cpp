#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(15);
    pq.push(1288);
    pq.push(13);
    if (!pq.empty())
    {
        cout << pq.top() << endl;
    }
    while (!pq.empty())
    {
        int temp = pq.top();
        pq.pop();
        cout << "popped element is: " << temp << endl;
    }
    priority_queue<int> pq2;
    pq2.push(-15);
    pq2.push(-1288);
    pq2.push(-13);

    if (!pq2.empty())
    {
        cout << -1 * pq2.top() << endl;
    }
    while (!pq2.empty())
    {
        int temp = -1 * pq2.top();
        pq2.pop();
        cout << "popped element is: " << temp << endl;
    }

    //
    priority_queue<int, vector<int>, greater<int>> pq4;
    pq4.push(32);
    pq4.push(5);
    pq4.push(654);
    while (!pq4.empty())
    {
        int temp = pq4.top();
        pq4.pop();
        cout << "popped element: " << temp << endl;
    }
    return 0;
}