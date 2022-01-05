#include <iostream>
#include <unordered_map>
using namespace std;

bool isSumEqualsToX(int a[], int x, int n)
{
    unordered_map<int, int> uMap;
    for (int i = 0; i < n; i++)
    {
        uMap[a[i]]++;
        for (auto it : uMap)
        {
            int key = it.first;
            int value = it.second;

            int pair = x - key;
            if (pair == key)
            {
                if (value > 1)
                {
                    return true;
                }
            }
            else
            {
                if (uMap.find(pair) != uMap.end())
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {4, 6, 3, 99, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << isSumEqualsToX(arr, 12, 6);
    return 0;
}