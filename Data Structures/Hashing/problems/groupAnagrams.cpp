#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> uMap;

    for (auto x : strs)
    {
        string temp = x;
        sort(x.begin(), x.end());
        uMap[x].push_back(temp);
    }

    for (auto it : uMap)
    {
        ans.push_back(it.second);
    }

    return ans;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    for (auto it : ans)
    {
        for (auto temp : it)
        {
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}