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
        ll n;
        cin >> n;
        vector<ll> v(n + 1);

        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ans = max(ans, v[i] - i);
        }
        cout << ans << endl;
    }
    return 0;
}