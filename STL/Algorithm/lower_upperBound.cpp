#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 3, 5, 6, 6};
    vector<int> v = {1, 3, 5, 6, 6};

    auto it1 = lower_bound(a, a + 5, 3);
    cout << it1 - a << endl;
    auto it2 = lower_bound(v.begin(), v.end(), 3);
    cout << it2 - v.begin() << endl;

    cout << endl;

    auto it3 = upper_bound(a, a + 5, 3);
    cout << it3 - a << endl;
    auto it4 = upper_bound(v.begin(), v.end(), 3);
    cout << it4 - v.begin() << endl;

    int index = lower_bound(a, a + 5, 6) - a;
    if (index != 5 && a[index] == 6) //o(logN)
    {
        cout << "element is present" << endl;
    }
    else
    {
        cout << " element is not present" << endl;
    }

    int ind2 = upper_bound(a, a + 5, 4) - a;
    ind2 -= 1;
    if (ind2 >= 0 && a[ind2] == 4)
    {
        cout << "last occurence" << endl;
    }
    else
    {
        cout << "does not exist" << endl;
    }

    //   no of times the x occurs//
    //   use upper_bound-lower
    return 0;
}