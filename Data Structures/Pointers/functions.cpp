#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    cout << *p << " " << p << "\n";
}

void update(int *p)
{

    //*******changing value of *p as it will also change in main fun
    *p = *p + 2;

    cout << *p << "\n";             // 5
    p = p + 1;                      // it will change value of p and *p for this block only (not in main function)
    cout << *p << " " << p << "\n"; // random number address +4
}

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    for (int i = 0; i < n; i++)
        *(arr + i) += 10;
    return sum;
}

int main()
{
    // int a = 5;
    // int *p = &a;

    // // print(p);

    // cout << *p << "\n";
    // // update(p);
    // cout << *p << " " << p << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << getSum(arr + 2, 3) << "\n"; // sending part of the array

    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << " ";
    cout << "\n";

    return 0;
}