#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    int lsPos = (1 << pos);
    if ((n & lsPos) != 0)
    {
        return 1;
    }
    return 0;
}
// return ((n & (1 << pos)) != 0);

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    return (n & ~(n << pos));
}

int updateBit(int n, int pos, int value)
{
    n = clearBit(n, pos);
    return (n | (value << pos));
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << getBit(5, 1) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1, 1) << endl;
    cout << isPowerOfTwo(32) << endl;
    return 0;
}
