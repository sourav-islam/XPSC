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
        string s;
        cin >> s;
        int sum = 0;
        if (s[0] == '1' && s[1] == '1')
            sum += 21;
        else if (s[0] == '1' || s[1] == '1')
            sum += 11;

        if (s[2] == '1' && s[3] == '1')
        {
            if (sum == 0)
                sum += 21;
            else
                sum *= 21;
        }
        else if ((s[2] == '1' || s[3] == '1'))
        {
            if (sum == 0)
                sum += 11;
            else
                sum *= 11;
        }
        cout << sum << endl;
    }
    return 0;
}