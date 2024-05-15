#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n < 10)
        {
            cout << (n * (n + 1)) / 2 << "\n";
        }
        else
        {
            ll cnt = (n / 9) * 45;
            cnt += (n % 9) * (n % 9 + 1) / 2;
            cout << cnt << endl;
        }
    }
    return 0;
}
