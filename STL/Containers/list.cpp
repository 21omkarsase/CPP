#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ls;
    ls.assign(4, 10);
    ls.insert(ls.begin() + 2, 44);
    // ls.push_back(11);
    // ls.push_back(14);
    // ls.push_back(15);
    // ls.push_front(10);
    // ls.erase(ls.begin());
    // ls.remove(15);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    //pop_front() pop_back() clear size begin end empty erase remove at;
    return 0;
}