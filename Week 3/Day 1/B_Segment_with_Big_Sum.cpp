#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    ll ar[n];
    for (ll &x : ar)
        cin >> x;
    ll l = 0, r = 0;
    ll ans = 1e18, sum = 0;

    while (r < n)
    {
        sum += ar[r];
        if (sum < s)
        {
            r++;
            continue;
        }

        else
        {
            while (sum >= s && l < r)
            {
                ans = min(ans, r - l + 1);
                sum -= ar[l];
                l++;
            }
                }
        r++;
    }
    if (ans == 1e18)
        cout << -1;
    else
        cout << ans;

    return 0;
}