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
        vector<ll> v(n);
        ll neg_cnt = 0;
        for (ll &x : v)
        {
            cin >> x;
            if (x < 0)
                neg_cnt++;
        }
        ll sum_all = 0;
        for (ll i = 0; i < n; i++)
        {
            sum_all += abs(v[i]);
            v[i] = abs(v[i]);
        }
        if (neg_cnt % 2 != 0)
        {
            sort(v.begin(), v.end());

            cout << sum_all - 2 * v[0] << endl;
        }
        else
        {
            cout << sum_all << endl;
        }
    }
    return 0;
}