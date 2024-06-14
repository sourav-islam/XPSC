#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int hap = 0, max_hap = 0, min_hap = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= l && v[i] <= r)
        {
            hap++;
            max_hap = max(hap, max_hap);
        }
        else
        {
            hap--;
            min_hap = min(hap, min_hap);
        }
    }
    cout << max_hap << " " << min_hap << "\n";
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