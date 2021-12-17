#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.back();

    if (!q.empty())
    {
        cout << q.front() << endl;
    }
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << "Popped element: " << temp << endl;
    }
    return 0;
}