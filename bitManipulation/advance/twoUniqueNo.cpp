#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void twoUniqueNo(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    int newZorSum = xorSum;

    int setBit = 0;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = (xorSum & 1);
        pos++;
        xorSum = (xorSum >> 1);
    }

    int newZor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos - 1))
        {
            newZor = newZor ^ arr[i];
        }
    }
    cout << "jasdhfj4" << endl;
    cout << newZor << " " << (newZorSum ^ newZor) << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 2, 3, 1, 7};
    twoUniqueNo(arr, 8);
    return 0;
}