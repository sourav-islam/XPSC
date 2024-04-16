#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll l = 0, r = k, cnt = 0;
        while (r <= n)
        {
            int flag = 0;
            for (int i = l; i < r; i++)
            {
                if (a[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
            l++;
            r++;
            if (flag)
                cnt++;
        }
        cout << cnt << endl;
    }
}
