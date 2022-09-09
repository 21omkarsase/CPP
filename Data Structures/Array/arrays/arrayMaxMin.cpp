#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if (a[i] > max)
        // {
        //     max = a[i];
        // }
        maxNo = max(a[i], maxNo);
        minNo = min(a[i], minNo);
        // if (a[i] < min)
        // {
        //     min = a[i];
        // }
    }

    cout << "Maximum No :" << maxNo << endl;
    cout << "Minimum No :" << minNo << endl;
    return 0;
}