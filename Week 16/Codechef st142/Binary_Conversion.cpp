#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) ct << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;

        int cnt = 0, diff_s_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                cnt++;
                if (s[i] == '1')
                    diff_s_1 += 1;
            }
        }
    }
    return 0;
}