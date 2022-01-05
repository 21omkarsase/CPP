#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeatingElement(int arr[], int n)
{
    unordered_map<int, int> uMap;
    for (int i = 0; i < n; i++) // o(n)
    {
        uMap[arr[i]]++;
    }

    for (int i = 0; i < n; i++) // o(n)
    {
        auto temp = uMap.find(arr[i]); // o(1)
        if (temp->second == 1)
        {
            return arr[i];
        }
    }
    return 0;
}

int main()
{
    int arr[] = {3, 4, 5, 4, 5, 3, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << firstNonRepeatingElement(arr, size);
    return 0;
}