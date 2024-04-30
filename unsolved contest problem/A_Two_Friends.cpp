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
        int n;
        cin >> n;
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        map<int, bool> mp;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i + 1 == ar[i])
            {
                cnt++;
                mp[i] = true;
            }
            if (i - 1 == ar[i])
            {
                if (mp[i - 1])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}