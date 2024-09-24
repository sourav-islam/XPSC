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

        int idx = n - k + 1;
        int total_odds = (n + 1) / 2 - idx / 2;

        if (total_odds % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}