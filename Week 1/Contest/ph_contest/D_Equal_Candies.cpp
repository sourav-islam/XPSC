#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        ll ans = 0;
        for (ll i = 1; i < n; i++)
        {

            ans += abs(ar[0] - ar[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}