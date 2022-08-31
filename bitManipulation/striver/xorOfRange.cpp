#include <iostream>
using namespace std;

int xorValue(int n)
{
    int rem = n % 4;
    switch (rem)
    {
    case 0:
        return n;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return n + 1;
        break;
    case 3:
        return 0;
        break;
    }
}
int main()
{
    int l, r;
    cin >> l >> r;
    cout << xorValue(l - 1) << endl;
    cout << xorValue(r) << endl;
    int ans = xorValue(r) ^ xorValue(l - 1);
    cout << ans << endl;
    return 0;
}