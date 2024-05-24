#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;

    int l = 0, r = 0, ans = 0, cnt = 0;
    while (r <= n)
    {
        ans += a[r];

        while (ans >= x)
        {
            if (ans == x)
                cnt++;

            ans -= a[l];
            l++;
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}