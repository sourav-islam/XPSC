#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll h, n;
        cin >> h >> n;
        vector<int> a(n), c(n);
        for (int &x : a)
            cin >> x;
        for (int &x : c)
            cin >> x;
        ll sum_of_a = accumulate(a.begin(), a.end(), 0LL);
        h -= sum_of_a;
        if (h <= 0)
        {
            cout << 1 << endl;
            continue;
        }

        ll l = 0, r = 1e11, ans = 0;

        while (l <= r)
        {
            ll mid = (l + r) >> 1;
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += (mid / c[i]) * a[i];
            }
            if (h - sum <= 0)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}