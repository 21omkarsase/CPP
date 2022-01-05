#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<string> winnerOfElection(string a[], int n)
{
    unordered_map<string, int> uMap;
    for (int i = 0; i < n; i++)
    {
        uMap[a[i]]++;
    }
    int max = 0;
    string key = "";
    for (auto it : uMap)
    {
        if (it.second > max)
        {
            key = it.first;
            max = it.second;
        }
        else if (it.second == max)
        {
            if (key < it.first)
            {
                key = it.first;
            }
        }
    }
    vector<string> ans;
    ans.push_back(key);
    string temp = to_string(max);
    ans.push_back(temp);

    return ans;
}

int main()
{
    string arr[] = {"omkar", "omkar", "sairaj", "rohan", "sanket", "abhishek", "omkar"};
    vector<string> ans = winnerOfElection(arr, 7);
    cout << "winner is " << ans.at(0) << " and No of votes " << ans.at(1);
    return 0;
}