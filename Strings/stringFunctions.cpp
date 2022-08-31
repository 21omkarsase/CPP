#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("omkar sase");

    // string str2(str1); // initialization by another string
    // cout << str2 << endl;
    // string str3(10, 'a'); // initialization by 10 characters with value 'a'

    // string str4(str1, 3, 4);                     // initialization by another string with start and end index
    // string str5(str2.begin(), str2.begin() + 7); // initialization by another string with start and end iterator

    // string str6 = str4; // initialization by another string

    // str4.clear(); // clear the string

    // char ch = str6.at(2); // or str6[2]
    // char chf = str6.front();
    // char chb = str6.back();

    // str6.append(" college:pce"); // append string to the end of the string
    // cout << str6 << endl;

    // str4.append(str6, 3, 8); // append string to the end of the string with start and end index
    // cout << str4 << endl;

    cout << str1 << endl;
    cout < str1.substr(1, 4) << endl;

    return 0;
}