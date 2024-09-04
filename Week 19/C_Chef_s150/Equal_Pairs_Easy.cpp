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
        for (int &i : a)
            cin >> i;
        map<int, int> mp;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                z++;
            else
                mp[a[i]]++;
        }
        int mx = 0;
        int val = 0;
        for (auto [x, y] : mp)
        {
            mx = max(mx, y);
            val += (y * (y - 1)) / 2;
        }
        val -= (mx * (mx - 1)) / 2;
        mx += z;
        int ans = (mx * (mx - 1)) / 2;
        cout << ans + val << endl;
    }
    return 0;
}