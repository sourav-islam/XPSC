#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            map<char, set<int>> mp;
            for (int i = 0; i < n; i++)
            {
                mp[s[i]].insert(a[i]);
            }

            vector<ll> v(n + 1, 0);
            vector<char> ch(26, 0);
            bool ok = true;

            for (auto &[x, y] : mp)
            {
                /* if (y.size() > 1)
                {
                    ok = false;
                    break;
                }
                else if (y.size() == 1)
                {
                    if (ch[x - 'a'] == 0 && v[*y.begin()] == 0)
                    {
                        v[*y.begin()] = 1;
                        ch[x - 'a'] = 1;
                    }
                    else if (ch[x - 'a'] == 1 && v[*y.begin()] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                } */
               /*  if (y.size() == 1)
                {
                    cout << x << " " << *y.begin() << " " << y.size() << endl;
                } */
            }
            // cout << (ok ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
