#include <bits/stdc++.h>
using namespace std;

void printNumber(int *ptr)
{
    cout << *ptr << endl;
}
void printLetter(char *ptr)
{
    cout << *ptr << endl;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;

    default:
        break;
    }
}
int main()
{
    int n = 4;
    printNumber(&n);
    char ch = 'a';
    printLetter(&ch);
    print(&n, 'i');
    print(&ch, 'c');
    return 0;
}