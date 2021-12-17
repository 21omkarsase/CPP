#include <iostream>
#include <charconv>
#include <array>
using namespace std;
// inside main func max int array size 10^6 bool array max size 10^7
// gloabally func max int array size 10^7 bool array max size 10^8
int main()
{
    array<int, 3> a = {2, 3, 4};
    cout << a[2] << endl;
    array<int, 3> a1;
    a1.fill(10);
    cout << a1[2] << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << a1.at(i) << " ";
        // cout << a1[i] << " ";
    }
    cout << endl;
    //iterators
    //begin(),end(),rbegin(),rend();

    array<int, 5> a2 = {1, 2, 3, 4, 5};
    for (auto it = a2.begin(); it < a2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // cout << *a2.begin() << endl;
    // cout << *a2.rbegin() << endl;
    // cout << *a2.end() << endl;
    // cout << *a2.rend() << endl;
    cout << endl;
    for (auto it = a2.rbegin(); it != a2.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it : a2)
    {
        cout << it << " ";
    }
    cout << endl;
    string s = "alsjfasdf";
    for (auto c : s)
    {
        cout << c << " ";
    }
    cout << endl;
    array<string, 2> ar3 = {"ad dfgdfg cx sd", "sdx sdsd sd sdb"};
    for (auto s : ar3)
    {
        cout << s << endl;
    }
    cout << endl;
    cout << a2.front() << endl;
    cout << a2.back() << endl;

    array<int, 3> arr = {'G', 'f', 'G'};  // ASCII val of 'G' =71
    array<int, 3> arr1 = {'M', 'M', 'P'}; // ASCII val of 'M' = 77 and 'P' = 80
    arr.swap(arr1);                       // now arr = {M,M,P}
    cout << arr.empty() << endl;
    cout << char(arr.front()) << " " << arr.back();

    return 0;
};
