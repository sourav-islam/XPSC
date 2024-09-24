#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int x : a)
    {
        if (x % a[0] != 0)
            b.push_back(x);
    }
    if (b.size() == 0)
    {
        cout << "Yes" << "\n";
        return;
    }
    sort(b.begin(), b.end());
    for (int x : b)
    {
        if (x % b[0] != 0)
        {
            cout << "No" << "\n";
            return;
        }
    }
    cout << "Yes" << "\n";
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