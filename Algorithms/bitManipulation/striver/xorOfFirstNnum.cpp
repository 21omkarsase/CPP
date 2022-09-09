#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rem = n % 4;
    switch (rem)
    {
    case 1:
        cout << 1 << endl;
        break;
    case 2:
        cout << n + 1 << endl;
        break;
    case 3:
        cout << 0 << endl;
        break;
    case 0:
        cout << n << endl;
        break;
    }
    return 0;
}