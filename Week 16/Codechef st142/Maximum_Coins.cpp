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
        int n, x;
        cin >> n >> x;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += pow(2, i);
        }
        if (n == x)
        {
            cout << ans << "\n";
            continue;
        }
        else
        {
            int val = 0;
            while (x > 0)
            {
                val += pow(2, n);
                x--;
                n--;
            }

            cout << (2 * val) - ans << "\n";
        }
    }
    return 0;
}