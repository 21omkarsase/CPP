#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n + 1];
    cin >> a;

    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "Given word is a palindrome" << endl;
    }
    else
    {
        cout << "Given word is not a palindrome" << endl;
    }
    return 0;
}