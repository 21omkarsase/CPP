#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "print func of base class" << endl;
    }
    void display()
    {
        cout << "display func of base class" << endl;
    }
};

class derived : base
{
public:
    void print()
    {
        cout << "print func of derived class" << endl;
    }
    void display()
    {
        cout << "display func of derived class" << endl;
    }
};

int main()
{
    base *ptr;
    derived d;
    ptr = &d;
    ptr->print();
    ptr->display();
    derived a;
    return 0;
}