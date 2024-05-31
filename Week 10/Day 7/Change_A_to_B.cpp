#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        ll ans = 0;
        while (true)
        {
            if (b % k == 0 && b / k >= a)
            {
                ans++;
                b /= k;
            }
            else if (b % k == 0)
            {
                ans += (b - a);
                break;
            }
            else
            {
                ll r = b % k;
                ans += r;
                b -= r;
            }
        }
        cout << ans << endl;
    }
}
