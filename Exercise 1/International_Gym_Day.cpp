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
        double d, x, y;
        cin >> d >> x >> y;
        if (x <= y)
            cout << 0 << "\n";
        else
        {
            int cnt = 1;
            x -= 1;
            while (x > y)
            {
                x -= (x * (d / 100));
                cnt++;
            }
            if (x > 0)
                cout << cnt << "\n";
            else
                cout << -1 << endl;
        }
    }
    return 0;
}