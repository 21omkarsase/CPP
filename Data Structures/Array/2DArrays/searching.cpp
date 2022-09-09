#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int key;
    cin >> key;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == key)
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "elemet is present" << endl;
    }
    else
    {
        cout << "element is not present" << endl;
    }
    return 0;
}