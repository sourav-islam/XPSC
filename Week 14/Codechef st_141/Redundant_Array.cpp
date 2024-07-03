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
        for (ll &i : v)
            cin >> i;
        sort(v.begin(), v.end());

        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        ll mn = LLONG_MAX;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ll value = it->first;
            ll count = it->second;
            ll final = (n - count) * 1LL * value;
            mn = min(final, mn);
        }
        if (mn > v.size())
        {
            cout << v.size() << endl;
        }
        else
        {
            cout << mn << endl;
        }
    }
    return 0;
}
