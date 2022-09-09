#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
using namespace std;

vector<int> posNegIntegers(int a[], int n)
{

    map<int, int> uMap;
    vector<int> v, ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            v.push_back(a[i]);
        }
        else
        {
            uMap[a[i]]++;
        }
    }
    sort(v.begin(), v.end());
    for (auto i = (int)v.size() - 1; i >= 0; i--)
    {
        int data = abs(v[i]);
        if (uMap[data] > 0)
        {
            ans.push_back(v[i]);
            ans.push_back(data);
            uMap[data] -= 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {11, -3, 3, 4, -3, 11, -11, -11, 6, 8};
    vector<int> ans = posNegIntegers(arr, 10);
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}

// vector<int> posNegIntegers(int a[], int n)
// {
// unordered_set<int> uSet;
// vector<int> ans;
// for (int i = 0; i < n; i++)
// {
//     int key = -1 * a[i];
//     if (uSet.find(key) != uSet.end())
//     {
//         ans.push_back(a[i]);
//         ans.push_back(key);
//     }
//     uSet.insert(a[i]);
// }
// return ans;
// }