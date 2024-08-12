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
        int w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        if (x1 * m <= w2 - w1 && x2 * m >= w2 - w1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}