#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e4;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v;
    for (ll i = 1; i <= N; i++)
    {
        v.push_back(pow(i, 3));
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        // for (ll x : v)
        //     cout << x << " ";
        bool found = false;
        for (ll i = 0; i < N; i++)
        {
            if (x <= v[i])
                break;

            ll l = 0, r = N - 1, mid;
            ll need = x - v[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (v[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (v[mid] < need)
                {
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            if (ok)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
