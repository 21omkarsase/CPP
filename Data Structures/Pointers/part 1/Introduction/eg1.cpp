#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    cout << &a << endl;
    int *ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << a << endl;

    // int *ptr2 = 5;  wrong
    int v;
    int *ptr2 = &v;
    *ptr2 = 14;
    cout << "v=" << v << endl;

    return 0;
}