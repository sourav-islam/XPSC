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
        // solve();
        string s;
        cin >> s;
        string main = "abc";
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (main[i] != s[i])
                count++;
        }
        cout << (count <= 2 ? "YES" : "NO") << '\n';
    }
    return 0;
}