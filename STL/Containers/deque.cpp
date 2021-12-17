#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(11);
    d.push_back(14);
    d.push_back(15);
    d.push_front(10);
    d.erase(d.begin());
    d.insert(d.begin(), 44);
    for (auto it : d)
    {
        cout << it << " ";
    }

    //pop_front() pop_back() clear size begin end empty at;
    return 0;
}