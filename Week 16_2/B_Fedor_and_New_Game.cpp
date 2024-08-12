#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void fedor(int x, vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (1 & (x >> i))
            a.push_back(1);
        // cout << 1 << " ";
        else
            a.push_back(0);
        // cout << 0 << " ";
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    for (int i = 0; i <= m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int fdr = v[m];
    vector<int> a;
    fedor(fdr, a, n);
    int ans = 0, cnt;
    for (int i = 0; i <= m - 1; i++)
    {
        cnt = 0;
        int val = v[i];
        for (int j = 0; j < n; j++)
        {
            int bit = (val >> j) & 1;
            if (bit != a[j])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;
    return 0;
}