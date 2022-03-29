#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(3);
    dq.push_front(2);
    dq.push_front(1);
    dq.push_back(4);
    dq.push_back(5);
    dq.pop_back();
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << dq.front() << " " << dq.back() << endl;
    cout << dq.size() << endl;
    cout << dq.empty() << endl;
    // dq.clear();
    dq.erase(dq.begin());
    for (auto it : dq)
    {
        cout << it << " ";
    }

    return 0;
}