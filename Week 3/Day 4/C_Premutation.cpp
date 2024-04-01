#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n;

        vector<ll> v[n + 1];

        m = n;

        while (m--)
        {
            for (int i = 1; i <= n - 1; i++)
            {
                int x;
                cin >> x;

                v[x].push_back(i);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            sort(v[i].begin(), v[i].end());
        }

        ll ans[n + 1];

        for (int i = 1; i <= n; i++)
        {
            if (v[i][n - 2] == n - 1)
            {
                if (v[i][0] == n - 1)
                {
                    ans[n] = i;
                }
                else
                {
                    ans[n - 1] = i;
                }
            }
            else
            {
                ans[v[i][n - 2]] = i;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}