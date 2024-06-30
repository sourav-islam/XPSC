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
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;

        if (sx - d > 1 && sy + d < m)
        {
            cout << n + m - 2 << "\n";
        }
        else if (sy - d > 1 && sx + d < n)
        {
            cout << n + m - 2 << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}