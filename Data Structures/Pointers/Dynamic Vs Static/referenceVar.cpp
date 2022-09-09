#include <iostream>
using namespace std;

// We should never return a local variable as a reference, reason being, as soon as the functions returns, local variable will be erased, however, we still will be left with a reference which might be a security bug in the code.

// int& fun(int a){  //bad practice(always avoid)
//     int b = a;
//     int &ans = b;
//     return ans;
// }

// int* fun(int a){  //bad practice(always avoid)
//     int *b = a;
//     return b;
// }

void update(int &n)
{ // pass by reference
    n += 2;
}

int main()
{
    int a = 5;

    int &b = a;

    cout << a << " a b " << b << endl;
    a++, b++;
    a++;
    cout << a << " a b " << b << endl;

    int c = 10;
    update(c);
    cout << c << "\n";
    return 0;
}