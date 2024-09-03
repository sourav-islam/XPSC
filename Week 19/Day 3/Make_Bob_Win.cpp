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
        if (n == 1)
        {
            cout << ((s[0] == '1') ? 0 : 1) << "\n";

            continue;
        }
        if (s[0] == '0' && s[n - 1] == '0')
            cout << 2 << "\n";
        else if (s[0] == '1' && s[n - 1] == '1')
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}