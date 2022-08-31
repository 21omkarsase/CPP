#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m = {1, 2};
    cout << *m.lower_bound(12) << endl;
    cout << *m.lower_bound(12) << endl;
    cout << *m.upper_bound(12) << endl;
    cout << *m.upper_bound(1) << endl;
    if ()
        return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (auto &i : a)
//             cin >> e;
//         sort(a.begin(), a.end());

//         multiset<int> avail;
//         avail.insert(1);

//         for (int i = 0; i < n; i++)
//         {
//             auto it = avail.upper_bound(a[i]);

//             if (it == avail.begin())
//                 avail.insert(2);
//             else{
//                 int idx = avail.begin() + 1;
//                 avail.erase(avail.begin());
//             }
//         }
//     }
//     return 0;
// }