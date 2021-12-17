#include <iostream>
using namespace std;

void countingSort(int arr[], int s, int r)
{
    int output_arr[s];
    int count_arr[r];

    for (int i = 0; i < r; i++)
    {
        count_arr[i] = 0;
    }

    for (int i = 0; i < s; i++)
    {
        count_arr[arr[i]]++;
    }

    for (int i = 1; i < r; i++)
    {
        count_arr[i] = count_arr[i] + count_arr[i - 1];
    }

    for (int i = 0; i < s; i++)
    {
        output_arr[--count_arr[arr[i]]] = arr[i];
    }

    for (int i = 1; i < s; i++)
    {
        arr[i] = output_arr[i];
    }
}

int main()
{
    int size = 0;
    int range = 10;
    cout << "Enter size of an array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    countingSort(arr, size, range);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}