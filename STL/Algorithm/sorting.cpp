#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[7] = {8, 7, 6, 5, 4, 3, 2};
    // sort(a, a + 5);
    sort(a + 1, a + 5);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    vector<int> v = {3, 1, 6, 2, 5};
    // sort(v.begin(), v.end());
    sort(v.begin() + 1, v.begin() + 4);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}