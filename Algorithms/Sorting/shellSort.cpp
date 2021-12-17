#include <iostream>
using namespace std;

void shellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int j = gap; j < n; j++)
        {
            int temp = arr[j];
            int i;

            for (i = j; i >= gap && arr[i] < arr[i - gap]; i -= gap)
            {
                arr[i] = arr[i - gap];
            }
            arr[i] = temp;
        }
    }
}

int main()
{
    int arr[5] = {44, 311, 3, 5, 22};
    shellSort(arr, 5);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}