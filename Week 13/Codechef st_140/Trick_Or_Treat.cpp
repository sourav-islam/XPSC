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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        for (int &x : a)
            cin >> x;
        for (int &y : b)
            cin >> y;

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int rm_val = a[i] % m;
            mp[rm_val]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int rm = b[i] % m;
            int com = (m - rm) % m;
            if (mp.find(com) != mp.end())
            {
                ans += mp[com];
            }
        }
        cout << ans << endl;
    }
    return 0;
}