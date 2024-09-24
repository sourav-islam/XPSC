#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int l, r;
    cin >> l >> r;
    int c = 0, cnt = 0;
    for (int i = l; i <= r; i += c)
    {
        cnt++;
        c++;
    }
    cout << cnt << "\n";
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