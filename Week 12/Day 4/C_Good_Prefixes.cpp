#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
int32_t main()
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

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
       ll sum = 0, mx = 0, ans = 0;
       for(int i = 0; i < n; i++)
       {
          mx = max(mx, v[i]);
          sum += v[i];
          if(2*mx == sum) ans++;
       }
       cout << ans << endl;
        
    }
    return 0;
}
