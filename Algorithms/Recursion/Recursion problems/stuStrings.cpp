#include <iostream>
using namespace std;

void subStrings(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subStrings(ros, ans);
    subStrings(ros, ans + ch);
}

int main()
{
    subStrings("ABC", "");
    return 0;
}