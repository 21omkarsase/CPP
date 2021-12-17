#include <bits/stdc++.h>
using namespace std;

void getMinAndMax(int a[], int size, int *minNo, int *maxNo)
{
    for (int i = 0; i < size; i++)
    {
        *minNo = min(*minNo, a[i]);
        *maxNo = max(*maxNo, a[i]);
    }
}

int main()
{
    int a[5] = {34, 2, -234, 95, 4};
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    getMinAndMax(a, 5, &minNo, &maxNo);
    cout << "minNo= " << minNo << endl;
    cout << "maxNo= " << maxNo << endl;
    return 0;
}