#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
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
        int x, y;
        cin >> x >> y;
        if ((y >= 2 * x) || (x >= 2 * y))
            cout << 0 << "\n";
        else if (x == y)
        {
            cout << x - (y / 2) << endl;
        }
        else
        {
            int mn = min(x, y);
            int mx = max(x, y);
            int ans = min(max(0ll, mn - mx / 2), max(0ll, mn * 2 - mx));
            cout << ans << endl;
        }
    }
    return 0;
}