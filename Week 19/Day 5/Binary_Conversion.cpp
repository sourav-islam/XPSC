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
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        int ones = 0, onet = 0, unmatch = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
            if (t[i] == '1')
                onet++;
            if (s[i] != t[i])
                unmatch++;
        }
        if (s == t && k % 2 == 0)
            cout << "YES" << "\n";
        else if (s == t && k % 2 != 0)
            cout << "NO" << "\n";

        else if (ones != onet)
        {
            cout << "NO" << "\n";
        }
        else
        {
            if (n == 2)
            {

                if (s == "01" && t == "10" && k > 1)
                    cout << "NO" << "\n";
                else if (s == "10" && t == "01" && k > 1)
                    cout << "NO" << "\n";
                else
                    cout << "YES" << "\n";
            }
            else
            {
                if (unmatch / 2 <= k)
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
        }
    }
    return 0;
}