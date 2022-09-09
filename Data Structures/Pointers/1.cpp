#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;

    int *x = &a;
    int *y = &a;

    // don't use this method to declare pointer
    //  int *z;
    //  z = &a;
    // always initialize pointer with real value of 0

    cout << x << " " << *x << " " << a << endl;
    *x += 3; //*x++ will not work
    (*x)++;  // use like this;
    // now if we print *y or a output will be 9
    // increasing value using pointer will change og value and pointers referencing to that address

    cout << x << " " << *x << " " << a << endl; // hexadecimal address 9 9
    cout << y << " " << *y << " " << a << endl; // hexadecimal address 9 9

    //************make pointer copy***********
    int *p1 = y;
    cout << *p1 << " " << p1 << " p1<-->y" << endl; // hexadecimal address 9
    *(p1) = *(p1) + 2;
    cout << y << " " << *y << " " << a << endl; // hexadecimal address 11 11
    // adding + 1 to pointer , result in ptr pointint to address next to that pointer
    // if it is int pointer, it will point to address+4 bytes
    // and it will not point to og y value
    p1 = p1 + 1;
    cout << *p1 << " " << p1 << endl; // hexadecimal address 9

    return 0;
}