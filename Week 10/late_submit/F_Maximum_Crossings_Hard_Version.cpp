#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<ll> a(n);
        for (ll &x : a)
            cin >> x;

        if (n == 1)
            cout << 0 << endl;
        else
        {
            pbds<ll> p;
            p.insert(a[0]);
            ll count = 0;
            for (ll i = 1; i < n; i++)
            {
                ll val = p.order_of_key(a[i]);
                count += (p.size() - val);
                p.insert(a[i]);
            }
            cout << count << endl;
        }
    }
    return 0;
}
