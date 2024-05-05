#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        for (ll i = 0; i < 1000; i++)
        {
            for (ll j = 0; j < 1000; j++)
            {
                if ((i | j) * (i ^ j) == n)
                {
                    cout << i << " " << j << endl;
                }
                break;
            }
        }
    }
    return 0;
}