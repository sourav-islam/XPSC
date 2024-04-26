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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        for (ll &x : v)
            cin >> x;
        ll sum = b;
        ll ans = 0;

        if (sum == 1)
        {

            for (ll i = 0; i < n; i++)
            {
                sum += v[i];
                if (sum > a)
                {
                    sum = a;
                }
                ans += (sum - 1);
                sum = 1;
            }
            cout << ans + 1 << endl;
        }
        else
        {
            ans += (sum - 1);
            sum = 1;

            for (ll i = 0; i < n; i++)
            {
                sum += v[i];
                if (sum > a)
                {
                    sum = a;
                }
                ans += (sum - 1);
                sum = 1;
            }
            cout << ans + 1 << endl;
        }
    }
    return 0;
}

/* #include <bits/stdc++.h>
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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        for (ll &x : v)
            cin >> x;

        ll sum = 0;
        if (b > a)
        {
            sum = a;
        }
        else
            sum = b;
        for (ll x : v)
        {
            if (x + 1 > a)
            {
                sum += a - 1;
            }
            else
                sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
 */