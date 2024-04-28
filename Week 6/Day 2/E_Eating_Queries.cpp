#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (ll &x : v)
            cin >> x;
        sort(v.begin(), v.end(), greater<ll>());
        vector<ll> pre(n);
        pre[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            pre[i] = (pre[i - 1] + v[i]);
        }
        while (q--)
        {
            ll a;
            cin >> a;
            ll l = 0, r = n - 1;
            int ans = 0;
            while (l <= r)
            {
                ll mid = (l + r) / 2;

                if (a <= pre[mid])
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (a > pre[n - 1])
                cout << -1 << endl;
            else
                cout << ans + 1 << endl;
        }
    }
    return 0;
}