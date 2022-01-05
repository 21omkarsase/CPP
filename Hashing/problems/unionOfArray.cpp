#include <iostream>
#include <unordered_set>
using namespace std;

void unionOfArray(int a[], int b[], int n)
{
    unordered_set<int> uSet;

    for (int i = 0; i < n; i++)
    {
        uSet.insert(a[i]);
        uSet.insert(b[i]);
    }

    for (auto it : uSet)
    {
        cout << it << " ";
    }
}

int main()
{
    int a[] = {4, 3, 1, 4, 3, 1, 6, 7};
    int b[] = {7, 8, 9, 7, 8, 9, 1, 2};
    int size = sizeof(a) / sizeof(a[0]);

    unionOfArray(a, b, size);
    return 0;
}