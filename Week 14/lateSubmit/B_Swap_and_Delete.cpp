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
        string s, t;
        cin >> s;
        int cnt_0 = 0, cnt_1 = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt_0++;
            else
                cnt_1++;
        }
        // cout << cnt_0 << " " << cnt_1 << endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (cnt_1 > 0)
                    cnt_1--;
                else
                    break;
            }
            else
            {
                if (s[i] == '1')
                    if (cnt_0 > 0)
                        cnt_0--;
                    else
                        break;
            }
        }
        cout << cnt_0 + cnt_1 << endl;
    }
    return 0;
}