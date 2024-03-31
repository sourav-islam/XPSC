/* #include <bits/stdc++.h>
#define ll long long
using namespace std;
ll main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll ar[n];
        for (ll &x : ar)
            cin >> x;

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            vector<ll> a(n);
            for (ll i = 0; i < n; i++)
            {
                a[i] = ar[i];
            }
            l -= 1, r -= 1;
            while (l <= r)
            {
                a[l] = k;
                l++;
            }

            // for (ll x : a)
            //     cout << x << " ";
            // cout << endl;

            ll ans = 0;
            for (ll i = 0; i < n; i++)
            {
                ans += a[i];
            }
            if (ans % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
 */

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
        ll n, q;
        cin >> n >> q;
        // ll v1[n], v2[n];
        vector<ll> v1(n + 1), v2(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v1[i];
            v2[i] = v2[i - 1] + v1[i];
        }
        /*  for (ll x : v2)
             cout << x << " ";
         cout << endl; */
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            // l = l - 1;
            // r = r - 1;
            ll ans = v2[l - 1] + (v2[n] - v2[r]) + (r - l + 1) * k;

            if (ans % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            // cout << v2[l - 1] + (v2[n] - v2[r]) << endl;
        }
    }
}