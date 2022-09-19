#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 2, 334423, 4, 4, 5, 5, 6, 6};
    int unique = 0;
    for (int i = 0; i < 9; i++)
    {
        unique = unique ^ a[i];
    }
    cout << unique << endl;
    return 0;
}