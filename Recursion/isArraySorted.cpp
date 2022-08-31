#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 0)
    {
        return true;
    }
    return arr[1] > arr[0] && arr[n - 1] <= arr[n] && sorted(arr, n - 1);
    cout << n << "n" << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sorted(arr, n) << endl;
    return 0;
}