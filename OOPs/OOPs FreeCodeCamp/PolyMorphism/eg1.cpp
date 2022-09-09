#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : public AbstractEmployee
{

public:
    string name;
    int age;
    bool gender;
    Employee(string n, int a, bool g)
    {
        name = n;
        age = a;
        gender = g;
    }
    void setAge(int a)
    {
        age = a;
    }
    void printEmployeeInfo()
    {
        cout << name << " " << age << " " << gender << endl;
    }
    virtual void Work()
    {
        cout << name << " is doing work" << endl;
    }
    void AskForPromotion()
    {
        if (age >= 30)
        {
            cout << name << "you got promoted" << endl;
        }
        else
        {
            cout << name << "You are not promoted" << endl;
        }
    }
};
class Developer : public Employee
{
public:
    string favLanguage;
    Developer(string n, int a, bool g, string favouriteLanguage)
        : Employee(n, a, g)
    {
        favLanguage = favouriteLanguage;
    }
    void fixBug()
    {
        if (favLanguage == "c++")
        {
            cout << name
                 << " can fix this bug" << endl;
        }
    }
    // void Work()
    // {
    //     cout << name << " is doing work" << favLanguage << endl;
    // }
};
class Teacher : public Developer
{
public:
    string subject;
    Teacher(string n, int a, bool g, string favLanguage, string s)
        : Developer(n, a, g, favLanguage)
    {
        subject = s;
    }
    void isTeach()
    {
        if (subject == favLanguage)
        {
            cout << name << " can teach " << subject << " subject" << endl;
        }
        else
        {
            cout << name << " can't teach " << subject << " subject" << endl;
        }
    }
    void Work()
    {
        cout << name << " is doing work" << subject << endl;
    }
};
int main()
{
    Developer d("Rohan", 300, 1, "c++");
    // d.fixBug();
    // d.AskForPromotion();
    Teacher t("abhishek", 40, 1, "c++", " javascript");

    // t.isTeach();
    // t.AskForPromotion();
    // d.Work();
    // t.Work();
    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->Work();
    e2->Work();

    // Employee e("om", 20 1);
    // e.Work();

    return 0;
}