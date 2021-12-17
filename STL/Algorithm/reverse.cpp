#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[7] = {8, 7, 6, 5, 4, 3, 2};
    // reverse(a, a + 5);
    reverse(a, a + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    vector<int> v = {3, 1, 6, 2, 5};
    reverse(v.begin(), v.end());
    // reverse(v.begin() + 1, v.begin() + 4);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}