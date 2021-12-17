#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "my name is omkar";
    cout << str << endl;
    // *******************append fuction*******
    string s1 = "fam";
    string s2 = "ily";
    cout << s1 + s2 << endl;
    s1 = s1 + s2;
    cout << s1 << endl;
    s1.append(s2);
    cout << s1 << endl;

    cout << str[0] << endl;

    // *******************clear fuction*******
    str.clear();
    cout << str;

    // *******************compare fuction*******
    string s1 = "abc";
    string s2 = "abc";
    if (!s1.compare(s2))
    {
        cout << "string are equal";
    }

    // *******************isEmpty fuction*******
    string s1 = "abc";
    cout << s1 << endl;
    s1.clear();
    if (s1.empty())
    {
        cout << "string is empty";
    }

    // *******************erase fuction*******
    string s = "mynameomkar";
    s.erase(6, 5);
    cout << s << endl;

    // *******************find fuction*******
    string s = "myname";
    cout << s.find("name") << endl;
    gives starting

        // *******************insert fuction*******
        string s = "myomkar";
    s.insert(2, "name");
    cout << s << endl;

    // *******************lenth/size fuction*******
    string s = "mynameomkar";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
        // }

        // *******************substr fuction*******
        string s = "mynameomkar";
        cout << s.substr(2, 5) << endl;

        // *******************stoi fuction*******
        string s = "900";
        cout << stoi(s) + 2 << endl;

        // *******************to_stirng fuction*******
        int x = 100;
        cout << to_string(x) + "2" << endl;

        // *******************sorting string *******
        string s = "mynameomkar";
        cout << s1 << endl;
        sort(s.begin(), s.end());
        cout << s << endl;
        return 0;
    }