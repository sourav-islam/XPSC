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
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        double max_v = sqrt((u * u) - 2 * a * s);
        if (u == v)
            cout << "Yes" << endl;
        else if (max_v <= v)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}