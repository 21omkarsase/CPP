#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    map<int, int> mp;
    for (auto it : arr1)
    {
        mp[it]++;
    }

    for (auto it : arr2)
    {
        int x = it;
        if (mp.find(x) != mp.end())
        {
            for (int i = 0; i < mp.find(x)->second; i++)
            {
                ans.push_back(it);
            }
            mp.erase(x);
        }
    }

    for (auto it : mp)
    {
        ans.push_back(it.first);
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};

    vector<int> ans = relativeSortArray(arr1, arr2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}