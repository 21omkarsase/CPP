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
    void getAge()
    {
        cout << name << endl;
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

int main()
{
    Employee employee1("OMKAR", 20, true);
    // employee1.printEmployeeInfo();
    Employee employee2("SAIRAJ", 20, false);
    // employee2.printEmployeeInfo();
    employee1.setAge(30);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    employee1.getAge();
    return 0;
}