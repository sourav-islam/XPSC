#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n + 2, vector<ll>(m + 2, 0));
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {

                bool change = true;
                while (change && (a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1] && a[i][j] > a[i + 1][j] && a[i][j] > a[i - 1][j]))
                {
                    if (a[i][j] == 1e9)
                        a[i][j] = 1;
                    else
                        a[i][j] = a[i][j] - 1;

                    if ((a[i][j] < a[i][j + 1] || a[i][j] < a[i][j - 1] || a[i][j] < a[i + 1][j] || a[i][j] < a[i - 1][j]))
                        change = false;
                }
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}