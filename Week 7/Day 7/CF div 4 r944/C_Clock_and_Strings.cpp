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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        /* if (((c > a && c < b) && (d < a || d > b)) || ((d > a && d < b) && (c < a || c > b)))
            cout << "YES" << endl;
        // else if ((a < b && b < d))
        //  if ((c > b && d > b) || (c < b && d < b))

        else */
        if ((c > b && d > b) || (c < a && d < a) || (c > b && d < a) || (c < a && d > b))
            cout << "NO" << endl;
        else if (c < a << b < d)
            cout << "YES" << endl;
        else if (((c > a && c < b) && (d < a || d > b)) || ((d > a && d < b) && (c < a || c > b)))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}