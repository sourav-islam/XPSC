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
        int a1, a2, b1, b2, ans = 0;
        cin >> a1 >> a2 >> b1 >> b2;
        // 1
        if (a1 > b1)
        {
            if (a2 >= b2)
            {
                ans++;
            }
        }
        else if (a1 == b1)
        {
            if (a2 > b2)
            {
                ans++;
            }
        }
        // 2
        if (a1 > b2)
        {
            if (a2 >= b1)
            {
                ans++;
            }
        }
        else if (a1 == b2)
        {
            if (a2 > b1)
            {
                ans++;
            }
        }
        // 3
        if (a2 > b1)
        {
            if (a1 >= b2)
            {
                ans++;
            }
        }
        else if (a2 == b1)
        {
            if (a1 > b2)
            {
                ans++;
            }
        }
        // 4
        if (a2 > b2)
        {
            if (a1 >= b1)
            {
                ans++;
            }
        }
        else if (a2 == b2)
        {
            if (a1 > b1)
            {
                ans++;
            }
        }

        /* if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2))
            ans += 2;
        if ((a2 > b1 && a1 >= b2) || (a2 >= b2 && a1 > b2))
            ans += 2; */
        cout << ans << endl;
    }
    return 0;
}
