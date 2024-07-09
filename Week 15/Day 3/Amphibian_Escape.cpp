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
        int n, k, h;
        cin >> n >> k >> h;
        int ans = 0;
        for (int a = 1; a <= n; a++)
        {
            if (a >= h)
                ans += n;
            // else if(a*k < h) continue;
            else
            {
                int Max_occ_B = ((a * k) - h) / (k - 1);
                // B can be [1, N]
                if (Max_occ_B > 0)
                {
                    // ans += min(n, Max_occ_B);
                    ans += Max_occ_B;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}