#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n >> i;
    if (n & (1 << i))
        cout << "SET" << endl;
    else
        cout << "NOT SET" << endl;
    return 0;
}