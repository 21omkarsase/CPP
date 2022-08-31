#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a[] = "omkar sase\0";
    char b[] = {'o', 'm', 'k', 'a', 'r', ' ', 's', 'a', 's', 'e'};
    char x[10]{};
    for (int i = 0; i < 10; i++)
    {
        cout << 1 + x[i] << endl;
    }

    string s = a;
    string t = b;
    cout << s << endl;
    cout << t << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << s.c_str();
    return 0;
}