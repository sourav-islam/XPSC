/* #include <bits/stdc++.h>
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
        int x, y, k;
        cin >> x >> y >> k;
        int i = 1;
        int ans = 0;
        while (x > 0 || y > 0 i <= 1e9)
        {
            if (i % 2 == 1)
            {
                x -= k;
            }
            else
                y -= k;

            i++, ans++;
        }
        cout << ans << endl;
    }
    return 0;
} */

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
        int x, y, k;
        cin >> x >> y >> k;

        // int a = ceil(x * 1.0 / k);
        // int b = ceil(y * 1.0 / k);
        int a = (x + k - 1) / k;
        int b = (y + k - 1) / k;
        if (a <= b)
            cout << 2 * b << "\n";
        else
            cout << 2 * a - 1 << "\n";
    }

    return 0;
}
