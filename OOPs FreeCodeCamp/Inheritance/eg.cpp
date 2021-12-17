#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : public AbstractEmployee
{
    int age;

public:
    string name;
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
        cout << gender << endl;
        if (favLanguage == "c++")
        {
            cout << name
                 << " can fix this bug" << endl;
        }
    }
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
};
int main()
{
    Developer d("Rohan", 300, 1, "c++");
    d.fixBug();
    d.AskForPromotion();
    cout << d.gender << endl;
    Teacher t("abhishek", 40, 1, "c++", "c++");
    t.isTeach();
    t.AskForPromotion();
    return 0;
}