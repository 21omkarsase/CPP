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
    weak_ptr<int> wePtr;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(23);
        wePtr = shPtr1;
        cout << *shPtr1 << endl;
    }
    // cout<<*wePtr<<endl;
    return 0;
}