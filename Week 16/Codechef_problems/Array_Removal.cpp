#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int ans = n;
    for (int i = 0; i < 32; i++)
    {
        int val = (1 << i) - 1;
        int oR = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] <= val)
            {
                oR |= v[j];
                cnt++;
            }
        }
        int res = n;
        if (oR == val)
            res -= cnt;
        ans = min(ans, res);
    }
    cout << ans << "\n";
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