#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int key)
{
    if (n < 0)
    {
        return -1;
    }

    if (arr[n] == key)
    {
        return n;
    }
    return lastOcc(arr, n - 1, key);
}

int main()
{
    int arr[] = {2, 3, 5, 3, 6, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstOcc(arr, n, 0, 2) << endl;
    cout << lastOcc(arr, n - 1, 6) << endl;
    return 0;
}