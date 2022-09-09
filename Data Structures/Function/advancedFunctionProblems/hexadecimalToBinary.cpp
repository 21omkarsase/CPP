#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i++)
    {
        if (n[i] >= '0' && n[i] <= 9)
        {
            ans += x * (n[i] - '0');
        }

        switch (n[i])
        {
        case 'A':
            ans += x * (n[i] - 'A' + 10);
            break;
        case 'B':
            ans += x * (n[i] - 'B' + 10);
            break;
        case 'C':
            ans += x * (n[i] - 'C' + 10);
            break;
        case 'D':
            ans += x * (n[i] - 'D' + 10);
            break;
        case 'E':
            ans += x * (n[i] - 'E' + 10);
            break;
        case 'F':
            ans += x * (n[i] - 'F' + 10);
            break;

        default:
            break;
        }
    }
    return ans;
}

int main()
{
    string n;
    cin >> n;

    cout << hexadecimalToDecimal(n) << endl;

    return 0;
}