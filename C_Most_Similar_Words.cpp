#include <bits/stdc++.h>
using namespace std;
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
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    if (v[i][k] != v[j][k])
                    {
                        cnt += abs((v[j][k] - v[i][k]));
                    }
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << endl;
    }
    return 0;
}