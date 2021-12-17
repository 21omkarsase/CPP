#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size)
{
    int maxNo = arr[0];
    for (int i = 0; i < size; i++)
    {
        maxNo = max(maxNo, arr[i]);
    }
    return maxNo;
}

void countingSort(int arr[], int size, int div)
{
    int output_arr[size];
    int count[10] = {0};

    for (int i = 0; i < size; i++)
    {
        count[(arr[i] / div) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        output_arr[--count[(arr[i] / div) % 10]] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = output_arr[i];
    }
}

void redixSort(int arr[], int size)
{
    int max = getMax(arr, size);

    for (int div = 1; max / div > 0; div *= 10)
    {
        countingSort(arr, size, div);
    }
}

int main()
{
    int arr[5] = {44, 311, 3, 5, 22};
    redixSort(arr, 5);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}