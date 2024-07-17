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
        int x;
        cin >> x;
        int i = 1;
        while (i * 2 <= x)
        {
            i *= 2;
        }
        cout << 2 * (x - i) << endl;
    }
    return 0;
}