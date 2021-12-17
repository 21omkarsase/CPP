#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int rStart = 0, rEnd = n - 1, cStart = 0, cEnd = m - 1;
    while (rStart <= rEnd && cStart <= cEnd)
    {
        for (int i = cStart; i <= cEnd; i++)
        {
            cout << a[rStart][i] << " ";
        }
        rStart++;
        for (int i = rStart; i <= rEnd; i++)
        {
            cout << a[i][cEnd] << " ";
        }
        cEnd--;
        for (int i = cEnd; i >= cStart; i--)
        {
            cout << a[rEnd][i] << " ";
        }
        rEnd--;
        for (int i = rEnd; i >= rStart; i--)
        {
            cout << a[i][cStart] << " ";
        }
        cStart++;
    }

    return 0;
}