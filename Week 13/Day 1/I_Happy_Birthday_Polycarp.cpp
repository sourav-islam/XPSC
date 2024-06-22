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
        int n, base = 0, ans = 0;
        cin >> n;
        for (int i = 1; i <= 9; i++)
        {
            base = base * 10 + 1;
            for (int j = 1; j <= 9; j++)
            {
                if (base * j <= n)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}