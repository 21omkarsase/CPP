#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<5> bt;
    cin >> bt;
    cout << bt.all() << endl; //false if any   bit is unset
    cout << bt.any() << endl;
    // true if all are bits set
    cout
        << bt.count() << endl; //no of set bits
    cout << bt.flip() << endl;
    cout << bt.flip(0) << endl;
    cout << bt.none() << endl;
    cout << bt.set() << endl;
    cout << bt.set(4) << endl;
    cout << bt.reset() << endl;

    cout << bt.size() << endl;
    cout << bt.test(0) << endl;
    cout << bt.set(0, 1) << endl;
    return 0;
}