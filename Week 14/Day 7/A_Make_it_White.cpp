#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void sv_code()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mn = n, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }
    cout << mx - mn + 1 << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        sv_code();
    }
    return 0;
}