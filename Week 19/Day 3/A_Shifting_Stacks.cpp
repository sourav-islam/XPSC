#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n, 0);
    int sum = 0;
    for (int &x : a)
    {
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= i)
        {
            sum += (a[i] - i);
        }
        else if (a[i] + sum >= i)
        {
            sum -= (i - a[i]);
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}