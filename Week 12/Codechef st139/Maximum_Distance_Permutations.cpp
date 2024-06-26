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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            v[i] = i + 1;
        }

        for (auto value : v)
        {
            cout << value << " ";
        }
        cout << '\n';

        int mid_idx = (n + 1) / 2;
        vector<int> ans(v.begin() + mid_idx, v.end());
        ans.insert(ans.end(), v.begin(), v.begin() + mid_idx);

        for (auto value : ans)
        {
            cout << value << " ";
        }
        cout << '\n';
    }
    return 0;
}