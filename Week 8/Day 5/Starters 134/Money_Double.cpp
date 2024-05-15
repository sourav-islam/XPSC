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
        int ans = x;
        while (y--)
        {
            if (ans < 1000)
                ans += 1000;
            else
                ans += (2 * ans) - ans;
        }
        cout << ans << "\n";
    }
    return 0;
}