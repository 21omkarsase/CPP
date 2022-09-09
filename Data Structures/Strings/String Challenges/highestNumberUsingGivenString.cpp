#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "53819834235";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    // string s = "lkjsdifhasjdnfj";
    // sort(s.begin(), s.end(), greater<char>());
    // cout << s << endl;
    return 0;
}