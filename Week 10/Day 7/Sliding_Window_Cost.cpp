#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pbds<int> p;
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        if (r - l + 1 == k)
        {
            auto median = p.find_by_order(k / 2);
            for (auto val : p)
                ans += abs(*median - val);
            cout << ans << " ";
            p.erase(l);
            l++;
        }
        else
            p.insert(a[r]);
        r++;
    }

    return 0;
}


