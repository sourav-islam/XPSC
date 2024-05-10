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
        int n;
        cin >> n;
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (pow(v[i], j) <= v[j])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
 */
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
        int n;
        cin >> n;
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        int i = 1, j = 1;
        while (i <= n)
        {
            if (pow(v[i], j) <= v[j])
            {
                ans++;
                j++;
            }

        }
        cout << ans << endl;
    }
    return 0;
}
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        ll n, cnt = 0;
        cin >> n;
        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                cnt += n;
            }
            else
            {
                for (ll j = 1; j <= n; j++)
                {
                    ll res = pow(a[i], j);
                    if (res > 1e9)
                        break;
                    if (res <= a[j])
                        cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}