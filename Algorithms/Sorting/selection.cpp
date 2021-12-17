#include <iostream>
using namespace std;

void selectionSort(int a[], int n) //arrays by deafult passed by address
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

int main()
{
    int a[] = {12, 35, 1, 3, 55, 33, 2};
    selectionSort(a, 7);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}