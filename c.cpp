#include <bits/stdc++.h>
using namespace std;

int calculatCount(int front, int end, int arr[])
{
    int sum = 0;
    for (int i = front; i <= end; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int minimumNet(int n, int k, vector<bool> fish)
{
    int a[n];
    for (auto i = 0; i < n; i++)
    {
        a[i] = fish.at(i);
    }

    int sum = 0;
    for (auto it : a)
    {
        sum += a;
    }
    int front = 0;
    int end = n - 1;
    int s = 0;
    int e = n - 1;
    while (front <= end)
    {
        if (sum > k)
        {
            s++;
            int count = calculatCount(s, e, a);
            if (count < k)
            {
                s--;
            }
            e--;
            count = calculatCount(s, e, a);
            if (count < k)
            {
                e++;
            }
        }
        front++;
    }
    int ans = 0;
    for (int i = s; i <= e; i++)
    {
        ans++;
    }
    return ans;
}
int main()
{
    vector<int> arr = {-7 5 - 1 - 4 - 10 - 8 10};
    cout << rakshaBandhan(arr, 7) << endl;
    return 0;
}