#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int originalN = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);

        n = n / 10;
    }
    if (sum == originalN)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}