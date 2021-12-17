#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "funcA" << endl;
    }
};
class B : public A
{
public:
    void funcB()
    {
        cout << "funcB" << endl;
    }
};
class C : public B
{
};

int main()
{
    C c;
    c.funcA();
    c.funcB();

    return 0;
}