#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
void solve()
{
    int x, y;
    cin >> x >> y;
    if (x - y >= 10)
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    while (x - y < 10)
    {
        x += 3;
        cnt++;
    }
    cout << cnt << endl;
    return;
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