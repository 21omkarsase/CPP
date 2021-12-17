#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "bca";
    bool res = prev_permutation(s.begin(), s.end());
    cout << s << endl;

    int a[3] = {3, 4, 5};
    bool res2 = prev_permutation(a, a + 3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    string s2 = "cba";
    // sort(s2.begin(), s2.end());
    do
    {
        cout << s2 << " ";
    } while (prev_permutation(s2.begin(), s2.end()));

    return 0;
}