#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

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
};

int main()
{
    // student a;
    // a.name = "omkar";
    // a.age = 20;
    // a.gender = 1;
    // cout << a.age << endl;
    // cout << a.name << endl;
    // cout << a.gender << endl;

    student a[2];
    for (int i = 0; i < 2; i++)
    {
        string s;
        cin >> s;
        a[i].setName(s);
        cin >> a[i].age;
        cin >> a[i].gender;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        a[i].printStudentInfo();
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        a[i].getName();
    }
    return 0;
}