#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    set<int> st = {11, 12, 13, 14, 15};
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.insert(x); //time complexity for insertion in O(logn)
    // }
    for (auto it = st.rbegin(); it != st.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
    // st.erase(st.begin());
    // st.erase(14)
    cout << *st.begin() << endl;
    cout << *st.find(12) << "kjhjh" << endl;
    // cout << *it << "dsd" << endl;
    st.erase(st.find(12), st.find(14));
    // st.erase(st.begin(), st.end()); delets all elements
    cout << *st.rbegin() << endl;
    cout << *st.begin() << endl;
    for (auto it : st)
    {
        cout << it << "asdfd ";
    }
    st.erase(15); //erases value 15
    cout << endl;

    //unoredered list

    unordered_set<int> s;

    s.insert(11);
    s.insert(18);
    s.emplace(332);
    s.insert(2);
    s.insert(12);
    s.insert(13);
    for (auto it : s)
    {
        cout << it << "asdfd ";
    }
    cout << endl;
    multiset<int> s2;
    s2.insert(1);
    s2.insert(1);
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    // s2.erase(1);
    cout << s2.size() << endl;
    for (auto it : s2)
    {
        cout << it << "asdfd ";
    }
    s2.clear();
    s2.count(2);
    return 0;
}
