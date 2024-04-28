#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll val;
        cin >> val;
        ll l = 0, r = n - 1;
        ll ans = 0;
        ll mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (val >= v[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (val < v[0])
            cout << 0 << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}