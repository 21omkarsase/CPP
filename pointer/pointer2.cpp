#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40};
    int *ptr = &a[0];
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}