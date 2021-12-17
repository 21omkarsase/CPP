#include <iostream>
using namespace std;

void printNumberInWords(int n, string str[])
{
    if (n == 0)
    {
        return;
    }

    printNumberInWords(n / 10, str);
    cout << str[n % 10] << " ";
}

int main()
{
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printNumberInWords(431, str);
    return 0;
}