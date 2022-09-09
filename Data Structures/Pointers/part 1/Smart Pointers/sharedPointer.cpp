#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor invoked" << endl;
    }
    ~MyClass()
    {
        cout << "Destructor invoked" << endl;
    }
};
int main()
{
    {
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
        cout << "shared count: " << shPtr1.use_count() << endl;
        {
            shared_ptr<MyClass> shPtr2 = shPtr1;
            cout << "shared count: " << shPtr1.use_count() << endl;
        }
        cout << "shared count: " << shPtr1.use_count() << endl;
    }

    return 0;
}