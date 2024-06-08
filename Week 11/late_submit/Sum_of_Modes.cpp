#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = (n * (n + 1)) / 2;
        map<ll, ll> mp;
        mp[0]++;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                sum--;
            }
            else
            {
                sum++;
            }
            ans += (mp[sum]);
            mp[sum]++;
        }
        cout << ans << endl;
    }
    return 0;
}