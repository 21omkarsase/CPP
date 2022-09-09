#include <bits/stdc++.h>
using namespace std;

int main()
{

    char crct[10] = "adlskfj";

    // char *wrong = "lajdfdf";   //never do like this

    char ch[10] = {'a', 'b', 'c'};

    for (int i = 0; i < 10; i++)
        cout << *(ch + i) << " ";
    cout << "\n";

    // char *c1 = &ch;  //it will give err
    cout << ch << "\n"; // abc
    char *c2 = &ch[0];  // abc
    // cout in char arr not work as similar to int array

    // cout << c1 << " " << c2 << " " << *c1 << " " << *c2 << "\n";
    cout << c2 << " c2 *c2 " << *c2 << "\n";

    char c[10] = "abc";
    for (int i = 0; i < 10; i++)
        cout << *(c + i) << " ";
    cout << "\n";

    // char *c3 = &ch;
    char *c4 = &ch[2];

    // cout << c3 << " " << c4 << " " << *c3 << " " << *c4 << "\n";
    cout << c4 << " " << *c4 << "\n";

    char temp = 'd';
    char *p = &temp;

    cout << *p << "\n"; // dabc
    // it will print it till not get null value ("\0")

    return 0;
}
