/* #include <bits/stdc++.h>
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
        vector<pair<int, int>> v;
        int s, e;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> e;
            v.push_back({s, e});
        }
        int w = v[0].first - 1;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first > w)
            {
                a.push_back(v[i].second);
            }
        }
        sort(a.rbegin(), a.rend());
        if (a[0] > v[0].second)
            cout << -1 << endl;
        else if (a[0] == v[0].second)
        {
            int occ = count(a.begin(), a.end(), a[0]);
            if (occ > 1)
                cout << -1 << endl;
            else
            {
                if (w == 0)
                    cout << 1 << endl;
                else
                    cout << w << endl;
            }
        }
        else
        {
            if (w == 0)
                cout << 1 << endl;
            else
                cout << w << endl;
        }
    }
    return 0;
}
 */
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
        vector<pair<int, int>> v;
        int s, e;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> e;
            v.push_back({s, e});
        }
        int s0 = v[0].first;
        int e0 = v[0].second;
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= s0 && v[i].second >= e0)
            {
                ans = -1;
                break;
            }
        }
        if (ans == -1)
            cout << -1 << endl;
        else
            cout << s0 << endl;
    }
    return 0;
}
