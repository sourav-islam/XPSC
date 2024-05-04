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
        vector<ll> v(k);
        for (ll &x : v)
            cin >> x;
        sort(v.rbegin(), v.rend());

        auto ok = [&](ll mid)
        {
            ll total_dis = 0;
            for (ll i = 0; i <= mid; i++)
            {
                total_dis += (n - v[i]);
            }
            return total_dis;
        };
        ll l = 0, r = n;
        ll mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid) < n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans + 1 << endl;
        /*
                int total = 0, ans = 0;
                for (int i = 0; i < k; i++)
                {
                    total += (n - v[i]);
                    if (total < n)
                    {

                        ans++;
                    }
                    else
                        break;
                }
                cout << ans << endl; */
    }
    return 0;
}
