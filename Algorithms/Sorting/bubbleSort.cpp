#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int rounds = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        rounds++;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    cout << "No of rounds : " << rounds << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    bubbleSort(a, 8);

    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}