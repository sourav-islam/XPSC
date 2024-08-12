#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            set<char> sa, sb;
            for (int i = l - 1; i < r; i++)
            {
                sa.insert(a[i]);
                sb.insert(b[i]);
            }

            vector<char> v;
            for (auto val : sa)
                v.push_back(val);
            for (auto val : sb)
                v.push_back(val);
            sort(v.begin(), v.end());
            /* for (auto i : v)
                cout << i;
            cout << endl; */

            int cnt = 0;
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] == v[i + 1])
                {

                    i++;
                }
                cnt++;
            }
            cout << (n - cnt) << endl;
            // cout << v.size() << endl;
        }
    }
    return 0;
}