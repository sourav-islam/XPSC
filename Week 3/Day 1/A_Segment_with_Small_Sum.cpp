#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
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
    ll sum = 0, ans = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
            r++;
        }
        else
        {
            sum -= ar[l];
            l++, r++;
        }
    }
    cout << ans;
    return 0;
}