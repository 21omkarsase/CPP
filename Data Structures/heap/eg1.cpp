#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p = new int();
    *p = 10;
    cout << p << endl;
    cout << *p << endl;
    delete (p);
    p = new int[4];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    cout << p << endl;
    cout << *p << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << *p << endl;
        p++;
    }
    delete[] p;
    cout << *p << endl;
    p = NULL;
    cout << p << endl;

    return 0;
}