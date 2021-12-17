#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[5] = {3, 2, 4, 5, 2};
    // cout << a << endl;
    // cout << &a << endl;
    // cout << &a[0] << endl;
    // cout << endl;
    // cout << a[2] << endl;
    // cout << &a[2] << endl;
    // cout << a + 2 << endl;
    // cout << *(a + 2) << endl;
    // cout << *(a + 4) << endl;

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(a + i) << " ";
    }

    // system("pause>0");
    return 0;
}