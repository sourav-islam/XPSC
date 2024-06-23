#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if (a >= b)
    {
        cout << n * a << endl;
        return;
    }
    if (b - a > n)
    {
        cout << (b * (b + 1) / 2 - (b - n) * (b - n + 1) / 2) << endl;
        return;
    }

    cout << ((b * (b + 1)) / 2 - (a * (a + 1)) / 2) + a * (n - (b - a)) << endl;

    /*
    else
    {
        while (b > a && n > 0)
        {
            ans += b;
            b--;
            n--;
        }
        if (n > 0)
            ans += (n * a);
        cout << ans << endl;
        return;
    } */
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}