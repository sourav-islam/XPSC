// 1st solution can't pass all testcases
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int l = 0, r = 0;
        int ans = 0;
        while (r < n)
        {
            if (r - l + 1 >= k && ar[r] <= q)
            {
                ans++;
                if (l < r && r == n - 1)
                {
                    l++;
                    r = l - 1;
                }
            }
            else if (ar[r] > q)
            {
                l++;
                while (l < r)
                {
                    r--;
                }
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;

        ll cons = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                cons++;
                if (i == n - 1 or a[i + 1] > q)
                {
                    if (cons >= k)
                    {
                        ll x = cons - k + 1;
                        ll add = (x * (x + 1)) / 2;
                        ans += add;
                    }
                    cons = 0;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
