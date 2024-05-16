/* #include <bits/stdc++.h>
using namespace std;
typedef long long ll ll;
// #define ll long long
#define pp(x) cout << x << "\n"
ll32_t main()
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
} */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
const int N = 1e6;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // sieve of Eratosthenes
    vector<ll> prime(N + 1, true);
    for (ll i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, sqt;
        cin >> x;

        sqt = sqrt(x);
        if (x == 1)
            cout << "NO" << '\n';
        else if (prime[sqt] && (sqt * sqt) == x)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}