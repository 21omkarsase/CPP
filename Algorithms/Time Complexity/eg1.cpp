#include <iostream>
using namespace std;

void sum1(double n)
{
    double summ = 0;
    for (int i = 1; i <= n; i++)
    {
        summ += i;
    }
    cout << summ << endl;
}

void sum2(double n)
{
    cout << (n * (n + 1)) / 2 << endl;
}

int main()
{
    // sum1(1);
    sum2(100000000000000);
    return 0;
}