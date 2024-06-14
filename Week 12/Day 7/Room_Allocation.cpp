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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += ceil(v[i] * 1.0 / 2);
        }
        cout << ans << endl;
    }

    return 0;
}