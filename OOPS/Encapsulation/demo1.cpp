#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    void funcA()
    {
        cout << a << endl;
        cout << "Func A" << endl;
    }

private:
    int b;
    void funcB()
    {
        cout << b << endl;
        cout << "Func B" << endl;
    }

protected:
    int c;
    void funcC()
    {
        cout << c << endl;
        cout << "Func C" << endl;
    }
};

int main()
{
    A obj;
    obj.a = 20;
    obj.funcA();
    // obj.funcB();
    obj.funcC();

    return 0;
}