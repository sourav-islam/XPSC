#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int sum = a + b + c + d + e;
        if (sum >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}