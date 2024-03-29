#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &x : v)
        cin >> x;
    ll l = 0, r = 0, ans = 0, sum = 0;
    multiset<long long> ml;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mx, mn;
        mx = *ml.rbegin(), mn = *ml.begin();

        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l < r)
            {
                mx = *ml.rbegin(), mn = *ml.begin();

                if (mx - mn > k)
                {
                    auto it = ml.find(v[l]);
                    ml.erase(it);
                    l++;
                }
                else
                    break;

                mx = *ml.rbegin(), mn = *ml.begin();

                if (mx - mn <= k)
                    ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans;
    return 0;
}