#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 3, 5, 6, 6};
    vector<int> v = {1, 3, 5, 6, 6};
    cout << accumulate(a + 1, a + 4, 0) << endl;
    cout << accumulate(a, a + 5, 0) << endl;
    cout << count(a, a + 5, 65) << endl;
    cout << count(a, a + 5, 65) << endl;
    cout << count(v.begin(), v.end(), 6) << endl;

    auto it = find(a, a + 5, 6);
    int ind = it - a;
    auto it2 = find(v.begin(), v.end(), 2);
    int ind2 = it2 - v.begin();

    cout << ind << endl;
    cout << ind2 << endl;

    cout << binary_search(a, a + 5, 6) << endl;
    cout << binary_search(v.begin(), v.end(), 6) << endl; //binary serach works only for sorted array
    return 0;
}