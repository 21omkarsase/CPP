#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 1];
    a[n] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = INT_MIN;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;

    return 0;
}