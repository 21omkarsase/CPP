#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (!(n & 1))
    {
        cout << "set EVEN" << endl;
    }
    else
    {
        cout << "not set ODD" << endl;
    }
    return 0;
}