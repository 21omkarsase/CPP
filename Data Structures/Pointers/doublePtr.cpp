#include <bits/stdc++.h>
using namespace std;

void update(int **ptr) // creates copy of it
{
    // don't run all these simultaneously

    // ptr = ptr + 1; // no change will in main function

    // *ptr = *ptr + 1; // it will change value present at address stored by ptr(q) that is it will change value of p by 4
    cout << **ptr << " " << *ptr << " " << ptr << endl;

    **ptr = **ptr + 1; // it will change value present at **ptr(p) i.e it will change value of a
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl
         << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    cout << endl
         << endl;

    return 0;
}