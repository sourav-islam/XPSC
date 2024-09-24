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
        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            string t = s.substr(i, 3);
            if (t == "map" or t == "pie")
            {
                cnt++;
                i += 2;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}