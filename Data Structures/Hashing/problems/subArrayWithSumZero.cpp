#include <iostream>
#include <unordered_set>
using namespace std;

bool isSubarraySumEqualToZero(int a[], int n)
{
    unordered_set<int> uSet;
    int prevSum = 0;
    for (int i = 0; i < n; i++)
    {
        prevSum = prevSum + a[i];
        if (prevSum == 0)
        {
            return true;
        }
        if (uSet.find(prevSum) != uSet.end())
        {
            return true;
        }
        uSet.insert(prevSum);
    }
    return false;
}

int main()
{
    int arr[] = {-3, 4, -3, -1, 1};
    cout << isSubarraySumEqualToZero(arr, 5);
    return 0;
}