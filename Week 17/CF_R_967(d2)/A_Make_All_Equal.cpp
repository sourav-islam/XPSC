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
        for (int &x : a)
            cin >> x;
        map<int, int> mp;
        for (auto v : a)
        {
            mp[v]++;
        }

        int mx = 0;
        for (auto [x, y] : mp)
        {
            mx = max(mx, y);
        }
        cout << n - mx << "\n";
    }
    return 0;
}