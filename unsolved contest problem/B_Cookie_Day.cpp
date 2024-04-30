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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll &x : v)
            cin >> x;
        ll ans = INT_MAX;

        for (ll x : v)
        {
            if (x / k == 2 && x % k == 1)
            {
                ans = min(ans, (x % k));
            }
        }
        if (n == k)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
