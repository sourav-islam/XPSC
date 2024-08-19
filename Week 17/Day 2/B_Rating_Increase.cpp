#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
void solve()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        string t = s.substr(0, i);
        string rem = s.substr(i);
        const int num_t = stoll(t);
        const int num_rem = stoll(rem);
        if (num_rem > num_t && rem[0] != '0')
        {
            cout << num_t << " " << num_rem << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}