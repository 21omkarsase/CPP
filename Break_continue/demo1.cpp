#include <iostream>
using namespace std;

int main()
{
    int pockMoney = 1000;
    for (int d = 1; d <= 30; d++)
    {
        if (d % 2 == 0)
        {
            continue;
        }
        if (pockMoney > 0)
        {

            cout << "go out today" << endl;
            pockMoney = pockMoney - 300;
        }
    }
    return 0;
}