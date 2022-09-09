#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {2, 3, 4, 5};

    cout << arr[0] << " " << arr << " " << *arr << " " << &arr[1] << endl;
    //  first ele      address of first ele    address of first ele  address of 2nd ele

    for (int i = 0; i < 10; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    int i = 1;
    cout << i[arr] << "\n"; // value of ele at index i

    // In c++ arrays are resolved using pointer either u use pointer or not…

    // if you replace arr[0] with 0[arr], the output would be same. Because compiler converts the array operation in pointers before accessing the array elements.

    // e.g. arr[0] would be *(arr + 0) and therefore 0[arr] would be *(0 + arr) and you know that both *(arr + 0) and *(0 + arr) are same.

    int *p1 = &arr[0];
    cout << *p1 << "\n";

    *p1 += 20;
    cout << *arr << "\n"; // this value i.e value of first ele will also increase by 1

    for (int i = 0; i < 10; i++)
        cout << *(arr + i) << " "
             << "(" << arr + i << ")"
             << " <--> ";
    cout << "\n";
    // arr=arr+1  this will not err as it address of arr is not assignable

    // here we aren't changing add of arr instead
    //  we are assigning add + 4 bytes val add to p1
    // so it won't give any err
    p1 = p1 + 1; // 0x61fec4 --> 0x61fec8
    *p1 = 100;   // will change value at address of 0x61fec8 to 100
    cout << p1 << " " << *p1 << "\n";

    for (int i = 0; i < 10; i++)
        cout << *(arr + i) << " "
             << "(" << arr + i << ")"
             << " <--> ";
    cout << "\n";
    return 0;
}