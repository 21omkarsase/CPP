#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000

bool hashTable[MAX + 1][2]; /// globally declared assign all values=0;

bool search(int x)
{
    if (x >= 0)
    {
        if (hashTable[x][0])
        {
            return true;
        }
        return false;
    }
    else
    {
        x = abs(x);
        if (hashTable[x][1])
        {
            return true;
        }
        return false;
    }
}

void insert(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            hashTable[a[i]][0] = true;
        }
        else
        {
            hashTable[abs(a[i])][1] = true;
        }
    }
}

int main()
{
    int arr[] = {-1, 9, 2, -5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    insert(arr, size);

    if (search(999))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }
    return 0;
}