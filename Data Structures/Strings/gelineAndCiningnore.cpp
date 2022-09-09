#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    int n;
    cin >> n; // if other than string data type vaiable is taken before getline(cin,name) input the use cin.ignore()
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
    cout << n << endl;

    // char a[3];
    // cin.get(a, 11);
    // cout << a;
    return 0;
}