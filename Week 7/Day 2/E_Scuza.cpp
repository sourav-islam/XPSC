#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> steps(n), ques(q);
        for (ll &x : steps)
            cin >> x;
        for (ll &y : ques)
            cin >> y;

            vector<ll> pre(n);
        pre[0] = steps[0];
        for (int i = 1; i < steps.size(); i++)
        {
            pre[i] = pre[i - 1] + steps[i];
        }

        for (ll i = 0; i < q; i++)
        {
            /*  ll total = 0;
             auto ok = [&](ll mid)
             {
                 total = 0;
                 for (ll i = 0; i <= mid; i++)
                 {
                     if (steps[i] <= ques[i])
                         total += steps[i];
                     else
                         break;
                 }
                 return total < ques[mid];
             }; */

            ll l = 0, r = n;
            ll mid, ans = 0;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (steps[mid] <= ques[i])
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }

            cout << pre[ans] << " ";
        }
        cout << endl;
    }
    return 0;
}