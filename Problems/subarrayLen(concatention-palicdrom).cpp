#include <bits/stdc++.h>
using namespace std;

bool palindrome(vector<int> a, int i, int j)
{
    while (i < j)
    {
        if (a[i] != a[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int findSubArray(vector<int> arr, int k)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= n - k; i++)
    {
        if (palindrome(arr, i, i + k - 1))
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 3};
    int k = 4;
    int ans = findSubArray(arr, k);
    if (ans == -1)

        cout << -1 << endl;
    else
    {
        for (int i = ans; i < ans + k;
             i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}