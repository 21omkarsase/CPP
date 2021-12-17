#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int j = 0;
    int key = 0;

    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && key < a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 35, 1, 3, 55, 33, 2};
    insertionSort(a, 7);
    for (auto it : a)
    {
        cout << it << " ";
    }

    return 0;
}