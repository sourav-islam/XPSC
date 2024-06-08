/* #include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

class Triple
{
public:
    int l, r, d;
    Triple(int l, int r, int d)
    {
        this->l = l;
        this->r = r;
        this->d = d;
    }
};
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<Triple> v;
    for (int i = 1; i <= m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        v.push_back(Triple(l, r, d));
    }
    vector<int> df(m + 2, 0);
    for (int i = 1; i <= k; i++)
    {
        int lf, rt;
        cin >> lf >> rt;
        df[lf] += 1;
        df[rt + 1] += -1;
    }

    // for (int i = 0; i < df.size(); i++)
    //     cout << df[i] << " ";

    for (int i = 1; i <= m + 1; i++)
    {
        df[i] = df[i - 1] + df[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        df[i + 1] *= v[i].d;
    }

    // for (int i = 0; i < df.size(); i++)
    //     cout << df[i] << " ";
    vector<int> op_df(m + 2, 0);
    for (int i = 0; i < v.size(); i++)
    {
        op_df[v[i].l] += df[i + 1];
        op_df[v[i].r + 1] += (-df[i + 1]);
    }

    for (int i = 1; i <= m + 1; i++)
    {
        op_df[i] = op_df[i - 1] + op_df[i];
    }
    for (int i = 1; i <= n; i++)
        cout << op_df[i] + a[i] << " ";
    return 0;
}

 */

/* #include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, pair<int, int>>> v(n + 1);
    for (int i = 1; i <= m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        v[i].first = l;
        v[i].second.first = r;
        v[i].second.second = d;
    }

    vector<int> df(m + 2, 0);
    for (int i = 1; i <= k; i++)
    {
        int lf, rt;
        cin >> lf >> rt;
        df[lf] += 1;
        df[rt + 1] += -1;
    }

    for (int i = 1; i <= m + 1; i++)
    {
        df[i] = df[i - 1] + df[i];
    }

    for (int i = 1; i <= m; i++)
    {
        df[i] *= v[i].second.second;
    }

    vector<int> op_df(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        op_df[v[i].first] += df[i];
        op_df[v[i].second.first + 1] += -df[i];
    }

    for (int i = 1; i <= n; i++)
    {
        op_df[i] = op_df[i - 1] + op_df[i];
    }
    for (int i = 1; i <= n; i++)
        cout << op_df[i] + a[i] << " ";
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<pair<int, int>, int>> v(m);
    for (int i = 0; i < m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        v[i] = {{l, r}, d};
    }
    map<int, long long> mp1;
    map<int, long long> mp2;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        mp2[x]++;
        mp2[y + 1]--;
    }
    vector<long long> idx(m);
    long long sum = 0;
    for (int i = 1; i <= m; i++)
    {
        sum += mp2[i];
        idx[i - 1] = sum;
    }
    int i = 0;
    for (auto x : v)
    {
        pair<int, int> z = x.first;
        int d = x.second;
        mp1[z.first] += (idx[i] * d);
        mp1[z.second + 1] -= (idx[i] * d);
        i++;
    }
    vector<long long> ans;
    long long sum1 = 0;
    for (i = 1; i <= n; i++)
    {
        sum1 += mp1[i];
        ans.push_back(sum1);
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] + a[i] << " ";

    return 0;
}