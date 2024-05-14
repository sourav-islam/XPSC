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
        vector<ll> ans;

        for (ll i = 1; i * i <= n; i++) // 10^5 x sqrt(10^12) = 10^5 x 10^6 = 10^11 so, TLE
        {
            if (n % i == 0)
            {
                ans.push_back(i);
                if (n / i != i)
                    ans.push_back(n / i);
            }
        }

        if (ans.size() == 3)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        // for (ll va : ans)
        //     cout << va << " ";
    }

    return 0;
}