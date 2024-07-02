#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    ll x, y, k;

    cin >> x >> y >> k;

    while (x > 1 && k > 0)
    {
        int operations = y - (x % y);
        if (operations >= k)
        {
            x += k;
            k = 0;
        }
        else
        {
            x += operations;
            k -= operations;
        }
        while (x % y == 0)
            x /= y;
    }
    if (k > 0)
    {
        k %= y - 1; // k jobe (1 theke y er modhe)
        x += k;
    }
    cout << x << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}