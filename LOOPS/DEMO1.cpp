#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    int n = 0;
    while (n < 10)
    {
        cout << "hello world" << endl;
        n++;
    }
    cout << endl;
    int o = 10;
    do
    {
        cout << "hello world" << endl;
    } while (o < 10);

    return 0;
}