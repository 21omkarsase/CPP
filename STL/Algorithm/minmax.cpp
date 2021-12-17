#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[7] = {8, 7, 6, 5, 4, 3, 2};
    cout << *max_element(a, a + 7) << endl;
    cout << *min_element(a, a + 7) << endl;
    cout << endl;
    vector<int> v = {3, 1, 6, 2, 5};
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << endl;
    return 0;
}