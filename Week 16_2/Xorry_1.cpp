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
        ll x;
        cin >> x;
        ll cnt = 0, xr = x, large_pow_2;
        while (xr > 1)
        {
            xr /= 2;
            cnt++;
        }
        large_pow_2 = pow(2, cnt);
        cout << (x - large_pow_2) << " " << large_pow_2 << endl;
    }
    return 0;
}