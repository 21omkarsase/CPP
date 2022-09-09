#include <iostream>
using namespace std;

int main()
{
    char a[] = "omkar sase";
    int i = 0;
    while (a[i] != '\0')
    {
        cout << a[i];
        i++;
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    char c[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    cout << a[0] << endl;

    char b[5] = {'o', 'm', 'k', 'a', 'r'};
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}