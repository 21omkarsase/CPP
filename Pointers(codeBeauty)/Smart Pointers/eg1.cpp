#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> unPtr1 = make_unique<int>(25);
    // cout << unPtr1 << endl;
    cout << *unPtr1 << endl;
    unique_ptr<int> unPtr2 = move(unPtr1);
    cout << *unPtr2 << endl;
    cout << *unPtr1 << endl; //then *unPtr1 becomes NULL
    return 0;
}