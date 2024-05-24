#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int l = 0, r = 0, ans = 0, cnt = 0;
    while (r <= n)
    {
        ans += a[r];
        if (a[r] % n == 0)
            cnt++;
        else if (ans % n == 0)
            cnt++;
        else if (ans > n)
        {
            while (ans > n)
            {
                ans -= a[l];
                l++;
            }
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}