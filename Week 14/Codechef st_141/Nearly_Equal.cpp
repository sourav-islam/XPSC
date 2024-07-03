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

        string s, ss;
        cin >> s >> ss;
        int ans = m, count;
        for (int i = 0; i <= n - m; i++)
        {
            count = 0;

            for (int j = 0; j < m; j++)
            {
                if (s[i + j] != ss[j])
                    count++;
            }

            ans = min(ans, count);
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;
}