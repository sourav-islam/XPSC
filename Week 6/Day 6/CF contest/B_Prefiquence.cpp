#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        string a, b;
        cin >> a >> b;

        int l = 0, r = 0;
        int cnt = 0;
        while (l < n && r < m)
        {
            if (a[l] == b[r])
            {
                cnt++;
                l++;
            }
            r++;
        }
        cout << cnt << endl;
    }
    return 0;
}