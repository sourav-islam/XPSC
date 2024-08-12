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
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if ((a == c || a == d) && a + b == c + d)
            cout << 1 << '\n';
        else if ((a == e || a == f) && a + b == e + f)
            cout << 2 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}