#include <bits/stdc++.h>
using namespace std;
//function overloading
class PolyMoriphism
{
public:
    void func()
    {
        cout << "func with no arguments" << endl;
    }
    void func(int x)
    {
        cout << "func with int argument" << endl;
    }
    void func(double x)
    {
        cout << "func with double argument" << endl;
    }
};

int main()
{
    PolyMoriphism obj;
    obj.func();
    obj.func(4);
    obj.func(4.5);
    return 0;
}