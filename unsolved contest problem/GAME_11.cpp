/* #include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> bat(n), boll(m);

        for (ll &a : bat)
            cin >> a;
        for (ll &a : boll)
            cin >> a;
        sort(bat.begin(), bat.end(), greater<ll>());
        sort(boll.begin(), boll.end(), greater<ll>());
        ll ans = 0;
        for (ll i = 0; i < 4; i++)
        {
            ans += (bat[i] + boll[i]);
        }
        vector<ll> rem(n + m - 8);
        for (ll i = 4; i < n; i++)
        {
            rem.push_back(bat[i]);
        }
        for (ll i = 4; i < m; i++)
        {
            rem.push_back(boll[i]);
        }
        sort(rem.begin(), rem.end(), greater<ll>());
        for (ll i = 0; i < 3; i++)
            ans += rem[i];

        if (n >= 4 && m >= 4 && n + m >= 11)
        {
            cout << ans << endl;
        }
        else
            cout << -1 << endl;
    }
}
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> bat(n), boll(m);

        for (int &a : bat)
            cin >> a;
        for (int &a : boll)
            cin >> a;

        sort(bat.begin(), bat.end(), greater<int>());
        sort(boll.begin(), boll.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans += (bat[i] + boll[i]);
        }

        int l = 4, r = 4;
        int cnt = 0;
        while (cnt <= 3)
        {
            if (l < n && r < m)
            {
                if (bat[l] > boll[r])
                {
                    ans += bat[l];
                    l++;
                    cnt++;
                }
                else
                {
                    ans += boll[r];
                    r++;
                    cnt++;
                }
            }
        }

        if (n >= 4 && m >= 4 && n + m >= 11)
        {
            cout << ans << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
