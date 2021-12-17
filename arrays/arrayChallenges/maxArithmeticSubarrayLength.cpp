#include <iostream>
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

    int currLen = 2;
    int maxLen = 2;
    int prevDiff = a[1] - a[0];

    for (int i = 2; i < n; i++)
    {
        if (a[i] - a[i - 1] == prevDiff)
        {
            currLen++;
        }
        else
        {
            prevDiff = a[i] - a[i - 1];
            currLen = 2;
        }
        maxLen = max(currLen, maxLen);
    }
    cout << maxLen << endl;

    return 0;
}