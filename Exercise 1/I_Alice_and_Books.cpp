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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = a[n - 1];
        int mx = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (mx < a[i])
                mx = a[i];
        }
        cout << ans + mx << "\n";
    }
    return 0;
}