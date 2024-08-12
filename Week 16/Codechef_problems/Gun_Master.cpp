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
        int n, d;
        cin >> n >> d;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        bool flag = true;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                if (v[i] > d)
                {
                    flag = false;
                    ans++;
                }
            }

            else
            {
                if (v[i] <= d)
                {
                    flag = true;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}