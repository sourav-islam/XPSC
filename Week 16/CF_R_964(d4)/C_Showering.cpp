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
        int n, s, m;
        cin >> n >> s >> m;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            a.push_back(l);
            a.push_back(r);
        }
        a.push_back(m);
        bool flag = false;
        int val = 0;
        for (int i = 0; i < a.size(); i += 2)
        {
            if (abs(val - a[i]) >= s)
            {
                flag = true;
                break;
            }
            val = a[i + 1];
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}