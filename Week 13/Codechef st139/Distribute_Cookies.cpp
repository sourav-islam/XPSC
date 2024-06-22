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
        int n, m;
        cin >> n >> m;
        if (m % n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n > m)
        {
            cout << n - m << endl;
            continue;
        }
        int mn = 0, mx;
        int i = 1;
        while (mn < m)
        {
            mn = n * i;
            i++;
        }

        cout << min(mn - m, m - (mn - n)) << endl;
    }
    return 0;
}