#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(98);
    s.insert(2);
    s.insert(01);

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;

    s.erase(1);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    if (s.count(1))
    {
        cout << "1 is present" << endl;
    }
    else
    {
        cout << "1 is not present" << endl;
    }

    cout << "Number of elements in un_set : " << s.size() << endl;

    if (s.find(20) == s.end()) // if it isn't present then it will point to the *s.end()
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "Key found" << endl;
        auto temp = s.find(20);
        s.erase(temp); // temp is iterator then also it will be delete 20
        cout << "20"
             << " deleted" << endl;
    }

    cout << "Number of elements in un_set : " << s.size() << endl;

    s.clear();
    return 0;
}