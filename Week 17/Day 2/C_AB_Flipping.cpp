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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (s[i] == 'B' && s[i - 1] == 'A')
            {
                swap(s[i], s[i - 1]);
                ans++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                swap(s[i], s[i + 1]);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}