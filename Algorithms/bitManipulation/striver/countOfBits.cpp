#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    // ****************T.C no. of bits************
    // while (n)
    // {
    //     if (n & 1)
    //         cnt++;
    //     n = n >> 1;
    // }

    // ****************T.C no. of set bits***********
    while (n)
    {
        n = n & (n - 1);
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}