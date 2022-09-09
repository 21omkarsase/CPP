#include <bits/stdc++.h>
using namespace std;

int main()
{
    char line1[10];
    cout << " Type a line1 terminated by carriage return\n>";
    cin.get(line1, 5);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << ' ' << line1;

    char line2[100];
    cout << " Type a line2 terminated by 't'" << endl;
    cin.getline(line2, 100, 't');
    cout << line2;
    return 0;
}