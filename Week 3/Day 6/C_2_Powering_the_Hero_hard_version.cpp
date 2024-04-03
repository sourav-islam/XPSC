#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
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
        priority_queue<ll> pq;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}