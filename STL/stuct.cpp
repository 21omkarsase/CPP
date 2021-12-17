#include <bits/stdc++.h>
using namespace std;

struct node
{
    string s;
    int num;
    double doub;
    char x;

    node(string s_, int num_, double doub_, char x_)
    {
        s = s_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main()
{
    node *Node = new node("omkar", 23, 23.55, 's');
    //or
    // node Node = node("omkar", 23, 34.44);
    cout << Node->s << endl;
    return 0;
}