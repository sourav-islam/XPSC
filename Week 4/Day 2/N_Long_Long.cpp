#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll sum = 0, ans = 0;
        for (ll &x : v)
        {
            cin >> x;
            sum += abs(x);
        }

        ll i = 0;
        while (i < n)
        {
            if (v[i] < 0)
            {
                ans++;
                while (i < n && v[i] <= 0)
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        cout << sum << " " << ans << endl;
    }

    return 0;
}
