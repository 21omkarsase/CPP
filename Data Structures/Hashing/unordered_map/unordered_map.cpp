#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, string> uMap;
    uMap["omkar"] = "PCE";
    uMap["sairaj"] = "Terna";
    uMap["rohan"] = "DY PATIL";
    uMap.insert(make_pair("abhishek", "LT"));

    cout << uMap.size() << endl;

    for (auto it : uMap)
    {
        cout << it.first << " " << it.second << endl;
    }

    if (uMap.find("omkar") == uMap.end()) // if it isn't present then it will point to the *s.end()
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "Key found" << endl;
        auto temp = uMap.find("omkar");
        cout << temp->first << " " << temp->second << endl;
        uMap.erase(temp); // temp is iterator then also it will be delete 20
        cout << "omkar-PCE"
             << " deleted" << endl;
    }

    for (auto it = uMap.begin(); it != uMap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
    unordered_map<int, int> um;
    for (int i = 0; i < 15; i++)
    {
        um[arr[i]]++;
    }

    for (auto it : um)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}