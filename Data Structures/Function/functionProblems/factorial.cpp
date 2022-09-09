#include <iostream>
using namespace std;

void factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    cout << factorial << endl;
    return;
}
int main()
{
    int n;
    cin >> n;
    factorial(n);
    return 0;
}