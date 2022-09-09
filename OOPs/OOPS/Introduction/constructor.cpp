#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "default constructor" << endl;
    }
    student(string s, int a, bool g)
    {
        name = s,
        age = a;
        gender = g;
        cout << "parameterised constructor" << endl;
    }
    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
        cout << "copy constructor" << endl;
    }

    ~student()
    {
        cout << "Destructor called" << endl;
    }
    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }
    void printStudentInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
        cout << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    student a("omkar", 20, 1);
    // a.printStudentInfo();
    student b;
    student c = a;
    cout << endl;
    cout << endl;
    c.printStudentInfo();
    student d("sairaj", 20, 1);
    if (c == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }
    if (d == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }
    return 0;
}