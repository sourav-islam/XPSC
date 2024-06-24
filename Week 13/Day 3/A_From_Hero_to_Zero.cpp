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
        ll n, k;
        cin >> n >> k;
        ll count = 0, decr;
        while (n != 0)
        {

            if (n % k == 0)
            {
                n /= k;
                count++;
            }

            else
            {
                decr = (n % k);
                count += decr;
                n = n - decr;
            }
        }
        cout << count << endl;
    }
    return 0;
}