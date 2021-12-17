#include <bits/stdc++.h>
using namespace std;

bool comp(int el1, int el2)
{
    if (el1 >= el2)
    {
        return true;
    }
    return false;
}
int main()
{
    int a[5] = {1, 3, 5, 6, 6};
    sort(a, a + 5, comp);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}