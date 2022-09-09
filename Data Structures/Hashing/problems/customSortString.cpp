#include <iostream>
#include <string>
#include <map>
using namespace std;

string customSortString(string order, string str)
{
    // order cba
    // str abcd
    map<char, int> mp;
    string ans = "";
    for (auto x : str)
    {
        mp[x]++;
    }

    for (auto x : order)
    {
        if (mp.find(x) != mp.end())
        {
            ans += x;
            if (mp.find(x)->second > 1)
            {
                mp.find(x)->second -= 1;
            }
            else
            {
                mp.erase(x);
            }
        }
    }

    for (auto it : mp)
    {
        ans += it.first;
    }

    return ans;
}

int main()
{
    string order = "cba";
    string str = "abcd";
    cout << customSortString(order, str);
    return 0;
}

// string(6, "x")
//-->xxxxxx