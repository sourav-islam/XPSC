#include <bits/stdc++.h>
using namespace std;

int fun(string &s1, string &s2)
{
    int val = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        val += abs(s1[i] - s2[i]);
    }
    return val;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                /*  for (int k = 0; k < v[0].size(); k++)
                 {
                      if (v[i][k] != v[j][k])
                     {
                         cnt += abs((v[j][k] - v[i][k]));
                     }
                 }
                 ans = min(ans, cnt); */

                ans = min(ans, fun(v[i], v[j]));
            }
        }

        cout << ans << endl;
    }

    return 0;
}