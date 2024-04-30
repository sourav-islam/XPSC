#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (ll i = n / 2; i < n; i++)
        {
            cnt += v[i] < mid ? (mid - v[i]) : 0;
        }
        return cnt <= k;
    };

    ll l = 1, r = 2e9, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}