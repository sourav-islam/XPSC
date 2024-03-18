#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> v;
    while (n--)
    {
        ll val;
        cin >> val;
        if (val % 2 == 0)
            ans += val;
        else
        {
            v.push_back(val);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() % 2 == 0)
    {
        for (ll x : v)
            ans += x;
    }
    else
    {
        for (ll i = 1; i < v.size(); i++)
        {
            ans += v[i];
        }
    }
    cout << ans << endl;
    return 0;
}