#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // can apply all func of araray
    vector<int> a;
    cout << a.size() << endl;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.erase(a.begin() + 1);
    cout
        << a.size() << endl;
    // a.clear();
    cout << a.size() << endl;
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        // cout << a[i] << " ";
        // cout << endl;
        cout << a.at(i) << " ";
        // cout << endl;
    }
    cout << endl;
    vector<int> v1(3, 10);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    // vector<int> v2(v1.begin(), v1.end());
    vector<int> v2 = {3, 23, 225, 2};
    // v2.push_back(21);
    cout << endl;
    cout << "  kjhfkjhsdf" << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }
    vector<int> v3(v2.begin() + 1, v2.end() - 1);
    cout << endl;
    // v3.pop_back();
    v3.emplace_back(4545); //same as push_back but take less time
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3.at(i) << " ";
    }
    cout << endl;
    // 2D vector
    vector<vector<int>> vec;

    vector<int> v5;
    v5.push_back(10);
    v5.push_back(20);
    v5.push_back(30);

    vector<int> v6;
    v6.push_back(60);
    v6.push_back(70);
    v6.push_back(80);

    vector<int> v7;
    v7.push_back(43);
    v7.push_back(43);
    v7.push_back(43);
    v7.push_back(43);

    vec.push_back(v5);
    vec.push_back(v6);
    vec.push_back(v7);

    cout << vec[1][2] << endl;

    for (auto vectr : vec)
    {
        for (auto it : vectr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> v8(10, vector<int>(4, 11));
    for (auto vectr : v8)
    {
        for (auto it : vectr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<int> ar[4];
    ar[0].push_back(12);
    ar[1].push_back(17);
    ar[2].push_back(56);
    ar[1].push_back(11);
    ar[2].push_back(22);
    ar[3].push_back(32); ///acts like a 2d vector
    cout << ar[0][0] << endl;
    cout << endl;

    return 0;
}
