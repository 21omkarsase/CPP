#include <bits/stdc++.h>
using namespace std;

class Employee
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
    void printEmployeeInfo()
    {
        cout << name << " " << age << " " << gender << endl;
    }
};

int main()
{
    Employee employee1("OMKAR", 20, true);
    employee1.printEmployeeInfo();
    Employee employee2("SAIRAJ", 20, false);
    employee2.printEmployeeInfo();

    return 0;
}
// Employee employee1;
// employee1.name = "omkar";
// employee1.age = 20;
// employee1.gender = 1;
// employee1.printEmployeeInfo();
// cout << endl;
// Employee employee2;
// employee2.name = "sairaj";
// employee2.age = 20;
// employee2.gender = 0;
// employee2.printEmployeeInfo();