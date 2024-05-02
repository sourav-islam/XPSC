#include <bits/stdc++.h>
using namespace std;
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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int &a : v)
            cin >> a;

        auto ok = [&](int mid)
        {
            int total_w = 0;
            for (int i = 0; i < n; i++)
            {
                total_w += (v[i] < mid) ? (mid - v[i]) : 0;
            }
            return total_w <= x;
        };
        int l = 1, r = 1e10, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}