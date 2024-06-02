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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        if (n == 1)
            cout << 0 << endl;
        else
        {
            pbds<int> p;
            p.insert(a[0]);
            int count = 0;
            for (int i = 1; i < n; i++)
            {
                int val = p.order_of_key(a[i]);
                count += (p.size() - val);
                p.insert(a[i]);
            }
            cout << count << endl;
        }
    }
    return 0;
}
