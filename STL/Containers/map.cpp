#include <iostream>
#include <unordered_map>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
    //time complextity-- > //log(n)
    map<string, int> m1;
    m1["age"] = 20; //or m1.emplace("age",20);
    m1["doy"] = 2002;
    m1["age"] = 21; //overrite 20;

    // m1.erase("age");/
    // m1.erase(m1.begin());
    // m1.erase(m1.begin(), m1.find("doy"));
    // cout << m1.find("age") << endl;
    // m1.clear();
    // cout << m1.empty() << endl;
    // // cout << m1.count("age") << endl;
    // cout << m1.find("age") << endl;
    for (auto it : m1)
    {
        cout << it.first << "  " << it.second << endl;
    }

    for (auto it = m1.rbegin(); it != m1.rend(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    unordered_map<int, int> m2;
    m2[1] = 11;
    m2[3] = 33;
    for (auto it : m2)
    {
        cout << it.first << "  " << it.second << endl;
    }

    //PAIR

    pair<string, int> p1;
    p1.first = "age";
    p1.second = 20;

    pair<pair<string, string>, string> college;
    college.first.first = "KBP";
    college.first.second = "PCE";
    college.second = "COLLEGE";

    cout << college.second << ":" << endl;
    cout << college.first.first << " ";
    cout << college.first.second << endl;

    pair<pair<int, int>, pair<int, int>> p2 = {{1, 2}, {3, 4}};
    cout << p2.first.first << " " << p2.second.first << endl;

    vector<pair<int, int>> v1;
    set<pair<int, int>> st;
    v1.push_back({12, 34});
    v1.push_back({134, 454});
    v1.push_back({452, 334});
    for (auto it : v1)
    {
        cout << it.first << " " << it.second << endl;
    }

    // unordered_map<pari<int,int>,int> m1 this is not possible

    multimap<string, string> mu1;
    // mu1["college"] = "pce";
    // mu1["name"] = "omkar";
    mu1.emplace("college", "pce");
    mu1.emplace("name", "omkar");
    mu1.emplace("name", "sairaj");
    for (auto it : mu1)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}