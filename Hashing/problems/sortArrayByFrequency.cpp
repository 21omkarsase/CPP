#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void frequencySort(vector<int> &arr)
{
    unordered_map<int, int> uMap;
    for (auto it : arr)
    {
        uMap[it]++;
    }

    sort(arr.begin(), arr.end(), [&](int a, int b)
         { return uMap[a] != uMap[b] ? uMap[a] < uMap[b] : a > b; });
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3};
    frequencySort(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}