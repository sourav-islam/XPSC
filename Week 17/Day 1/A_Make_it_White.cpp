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
        string s;
        cin >> s;
        bool ok = false;
        int l, r;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && !ok)
            {
                l = i;
                ok = true;
            }
            if (s[i] == 'B' && ok)
                r = i;
        }
        cout << r - l + 1 << endl;
    }
    return 0;
}