#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    cout << isPowerOfTwo(32) << endl;
    return 0;
}