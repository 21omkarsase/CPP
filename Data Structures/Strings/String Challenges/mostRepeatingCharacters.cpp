#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    cout << 3 + 'a' << endl;
    // cout << 'a' + 1 << endl;
    string s = "alkkddssslsdfkjkffff";

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
            cout << ans << " ";
        }
    }
    cout << endl;
    cout << maxF << " " << ans << endl;
    return 0;
}