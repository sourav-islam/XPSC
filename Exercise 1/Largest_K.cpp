#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for (int &x : a)
    {
        cin >> x;
        s.insert(x);
    }
    int ans = s.size();
    int dist = s.size();

    for (int i = n; i > 0; i--)
    {
        if (i % dist == 0)
        {
            cout << i << "\n";
            return;
        }
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