#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << a << " " << b << endl;
    return 0;
}