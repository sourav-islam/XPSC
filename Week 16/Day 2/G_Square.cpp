#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"

bool sqr(int x)
{
    ll val = sqrt(x);
    return ((val * val) == x);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll num = (a * b) + (c * d);
        if (sqr(num))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}