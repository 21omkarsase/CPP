#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    return power(n, p - 1) * n;
}

int main()
{
    cout << power(5, 3) << endl;
    return 0;
}