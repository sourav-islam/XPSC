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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        int temp = 0, ans = 0;
        for (int val : v)
        {
            if (val >= k)
            {
                temp += val;
            }
            else if (val == 0)
            {
                if (temp > 0)
                {
                    ans++;
                    temp--;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}