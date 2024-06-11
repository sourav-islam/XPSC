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
        ll n;
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> pre_sum(n);
        pre_sum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + v[i];
        }
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j <= i; j++)
                if (v[j] == (pre_sum[j] - v[j]))
                {
                    c++;
                    break;
                }
        }

        cout << c << endl;
    }
    return 0;
}
