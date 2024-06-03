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
        string s;
        cin >> s;
        vector<int> cnt(7, 0);
        for (int i = 0; i < n; i++)
        {
            cnt[s[i] - 'A']++;
        }

        int ans = 0;
        for (int val : cnt)
        {
            if (m - val > 0)
                ans += (m - val);
        }
        cout << ans << endl;
    }
    return 0;
}