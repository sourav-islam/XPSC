#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &val : v)
            cin >> val;
        int mini = INT_MAX;
        pair<int, int> idx;

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(v[i] - v[i + 1]) < mini)
            {
                mini = abs(v[i] - v[i + 1]);
                idx = {i, i + 1};
            }
        }

        if (v[idx.first] > v[idx.second])
        {
            long long sum1 = 0, sum2 = 0;
            v[idx.second] = 1;
            {
                for (int y = 0; y < n - 1; y++)
                {
                    sum1 += abs(v[y] - v[y + 1]);
                }
            }
            v[idx.second] = k;
            {
                for (int y = 0; y < n - 1; y++)
                {
                    sum2 += abs(v[y] - v[y + 1]);
                }
            }
            cout << max(sum1, sum2) << endl;
        }
        else
        {
            long long sum1 = 0, sum2 = 0;
            v[idx.first] = 1;
            {
                for (int y = 0; y < n - 1; y++)
                {
                    sum1 += abs(v[y] - v[y + 1]);
                }
            }
            v[idx.first] = k;
            {
                for (int y = 0; y < n - 1; y++)
                {
                    sum2 += abs(v[y] - v[y + 1]);
                }
            }
            cout << max(sum1, sum2) << endl;
        }
    }
}
