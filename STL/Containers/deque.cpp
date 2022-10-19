// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> d;
//     d.push_back(11);
//     d.push_back(14);
//     d.push_back(15);
//     d.push_front(10);
//     // d.erase(d.begin());
//     // d.insert(d.begin(), 44);
//     for (auto it : d)
//     {
//         cout << it << " ";
//     }

//     //pop_front() pop_back() clear size begin end empty at;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
   int arr[] = {2, 4, 1, 45, 8, 5, 6};
   multiset<int> check(arr, arr + 7);
   cout<<"List is : ";
   for (auto i = check.begin(); i != check.end(); i++)
      cout << *i << " ";
    cout<<*(check.begin())<<" : ms begin\n";
    cout<<*(check.end())-1<<" : ms end\n"; 
    cout<<*(check.rbegin())<<" : ms rbegin\n"; 
    cout<<*(check.rend())<<" : ms rend\n";
   return 0;
}