#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 & b == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    else if (a == 0 && b > 0)
    {
        if (b % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
        return;
    }
    else if (a > 0 && b == 0)
    {
        if (a % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
        return;
    }
    else
    {
        int sum = (a * 1) + (b * 2);
        if (sum % 2 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
        return;
    }
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