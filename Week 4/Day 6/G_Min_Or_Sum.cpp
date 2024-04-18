#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            x |= v[i];
        }
        cout << x << "\n";
    }
}