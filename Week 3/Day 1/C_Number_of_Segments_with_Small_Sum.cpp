#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (ll &x : v)
        cin >> x;

    ll l = 0, r = 0;
    long long sum = 0;
    ll ans = 0;
    while (r < n)
    {
        sum += v[r];

        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l < r)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= s)
                ans += r - l + 1;
        }
        r++;
    }
    cout << ans;
    return 0;
}