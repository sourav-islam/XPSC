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
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int L = max(l1, l2), R = min(r1, r2);
        if (R < L)
        {
            cout << 1 << endl;
            continue;
        }
        int ans = R - L;
        if (L - min(l1, l2) > 0)
            ans++;
        if (max(r1, r2) - R > 0)
            ans++;
        cout << ans << endl;
    }
    return 0;
}