#include <iostream>
using namespace std;
// #include <bits/stdc++.h>  for this header file no array error for constant memory allocation
// #include <iostream>  for this header file  array error for constant memory allocation occurs

int main()
{
    int n;
    cin >> n;
    // int a[n];
    int *a;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Array[" << i << "]:";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " ";
        cout << *(a + i) << " ";
    }

    delete[] a;
    a = NULL;
    // a = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Array[" << i << "]:";
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << a[i] << " ";
    //     cout << *(a + i) << " ";
    // }
    return 0;
}