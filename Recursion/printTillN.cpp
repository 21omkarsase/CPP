#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    cout << n << " ";
    dec(n - 1);
}

void inc(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    inc(n - 1);
    cout << n << " ";
}

int main()
{
    dec(10);
    cout << endl;
    inc(10);
    return 0;
}