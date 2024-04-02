#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        string s;
        cin >> s;
        ll total = 0;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                total += i;
                v.push_back((n - 1 - i) - i);
            }
            else
            {
                total += n - 1 - i;
                v.push_back((i - (n - 1 - i)));
            }
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                total += v[i];
            }
            cout << total << " ";
        }
        cout << endl;
    }
    return 0;
}