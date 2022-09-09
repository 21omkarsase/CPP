#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int x = fib(n - 1);
    int y = fib(n - 2);
    return x + y;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}