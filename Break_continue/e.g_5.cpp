#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "input an operator(+,*,/,-)" << endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "enter a valid operator" << endl;
        break;
    }
    return 0;
}