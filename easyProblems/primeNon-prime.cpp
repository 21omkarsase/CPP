#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (i % 2 == 0)
        {
            cout << "Non Prime" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "Prime" << endl;
    }
    return 0;
}