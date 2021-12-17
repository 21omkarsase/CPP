#include <iostream>
using namespace std;

string moveAllXToEnd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveAllXToEnd(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    cout << moveAllXToEnd("adjfxxdfxksjhdxxdjf");
    return 0;
}