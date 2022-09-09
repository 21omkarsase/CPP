#include <iostream>
#include <unordered_set>
using namespace std;

void intersectionOfArray(int a[], int b[], int n)
{
    unordered_set<int> uSet;
    unordered_set<int> uFinal;

    for (int i = 0; i < n; i++)
    {
        uSet.insert(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (uSet.find(b[i]) != uSet.end())
        {
            uFinal.insert(b[i]);
        }
    }

    for (auto it : uFinal)
    {
        cout << it << " ";
    }
}

int main()
{
    int a[] = {7, 8, 9, 3, 4, 7};
    int b[] = {7, 8, 9, 4, 3, 7};
    int size = sizeof(a) / sizeof(a[0]);

    intersectionOfArray(a, b, size);
    return 0;
}