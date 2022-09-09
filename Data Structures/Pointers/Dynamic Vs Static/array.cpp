//            memory
// 1. Static  (stack)
// 2.Dynamic  (heap)
// we can access heap memory using new keyword
// heap memory always return pointer

#include <bits/stdc++.h>
using namespace std;

int sum(int *arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (*(arr + i));
    }
    return ans;
}
// in static allocation memory will be released after the execution of particular block
// but in dynamic memory it will not be released automatically
// we use delete keyword for erasing or deleting heap memory
int main()
{
    char *ch = new char;
    //(left side) stored in stack
    //(right side) stored in heap
    cin >> *ch;

    int *ptr = new int;
    cin >> *ptr;

    cout << *ptr << endl;
    cout << *ch << endl;

    delete ch;
    delete ptr;

    // int n;
    // cin >> n;

    // int a[n];   //it is very bad practice
    // we should no size of array at compile time
    // by this method we will get size of of array at run time
    // this method uses memory from stack

    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sum(arr, n) << endl;

    delete[] arr;

    return 0;
}
