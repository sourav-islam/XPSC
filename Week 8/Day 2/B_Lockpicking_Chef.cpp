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
        string s, k;
        cin >> s >> k;
        sort(s.rbegin(), s.rend());
        sort(k.rbegin(), k.rend());
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            if (k[i] == '0')
            {
                ans += abs(9 - (s[i] - 48) + 1);
            }
            else
                ans += abs((k[i] - 48) - (s[i] - 48));
        }
        cout << ans << "\n";
        /* cout << s << "\n"
             << k << "\n"; */
    }
    return 0;
}