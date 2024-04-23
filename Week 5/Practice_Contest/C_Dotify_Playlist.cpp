#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;
        priority_queue<pair<ll, ll>> pq;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            pq.push({a, b});
        }
        ll ans = 0;
        while (!pq.empty() && k > 0)
        {
            if (pq.top().second == l)
            {
                ans += pq.top().first;
                k--;
            }
            pq.pop();
        }

        if (k == 0)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}